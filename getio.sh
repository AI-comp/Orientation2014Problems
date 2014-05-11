rm -rf tmp
mkdir tmp

for dir in a+b bullet diagonal direction earthquake expression goban hisha lariat masshiro maximum pokemon primes robot social temperature typewriter
do
  mkdir "tmp/$dir"
  cp "$dir/rime-out/tests/50-random00.in" "tmp/$dir/in.txt"
  cp "$dir/rime-out/tests/50-random00.diff" "tmp/$dir/out.txt"
  cp "$dir/rime-out/tests/00-sample1.in" "tmp/$dir/sample-in.txt"
  cp "$dir/rime-out/tests/00-sample1.diff" "tmp/$dir/sample-out.txt"
  cp "$dir/statement.md" "tmp/$dir/statement.txt"
done

