rm -rf tmp
mkdir tmp

for dir in a+b bullet diagonal direction earthquake expression goban hisha lariat masshiro maximum pokemon primes robot social temperature typewriter
do
  mkdir "tmp/$dir"
  cp "$dir/rime-out/tests/50-random00.in" "tmp/$dir/50-random00.in"
  cp "$dir/rime-out/tests/50-random00.diff" "tmp/$dir/50-random00.diff"
  cp "$dir/rime-out/tests/50-random01.in" "tmp/$dir/50-random01.in"
  cp "$dir/rime-out/tests/50-random01.diff" "tmp/$dir/50-random01.diff"
done

