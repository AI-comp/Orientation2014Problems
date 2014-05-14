rm -rf tmp
mkdir tmp

for dir in bullet diagonal direction earthquake expression goban hisha lariat masshiro maximum pokemon primes robot social temperature typewriter
do
  mkdir "tmp/$dir"

  cp "$dir/rime-out/tests/05-small.in" "tmp/$dir/small-in.txt"
  cp "$dir/rime-out/tests/05-small.diff" "tmp/$dir/small-out.txt"
  cp "$dir/rime-out/tests/50-random00.in" "tmp/$dir/large-in.txt"
  cp "$dir/rime-out/tests/50-random00.diff" "tmp/$dir/large-out.txt"

  statement="tmp/$dir/statement.txt"
  cp "$dir/statement.md" $statement

  echo "
例
--
### 入力
\`\`\`" >> $statement

  cat "$dir/rime-out/tests/00-sample1.in" >> $statement

  echo "\`\`\`

### 出力
\`\`\`" >> $statement

  cat "$dir/rime-out/tests/00-sample1.diff" >> $statement

  echo "\`\`\`" >> $statement

done

