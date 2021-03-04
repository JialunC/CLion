# CLion Setup

A CLion starter project with Catch2 configured.

## How to run test:
1. Navigate to the `FibTest.cpp` in the `/Catch_tests` folder.
2. Click `>` to the left of `TEST_CASE("get correct Fibonacci", "[]"){` and select `Run ...`.
   ![](https://github.com/JialunC/CLion/blob/master/statics/CLion_GUI.png)
   You should see the following output in your console.
   ```
   /Users/tom/Documents/NYU/CLion/cmake-build-debug/Catch_tests/Catch_tests_run -r xml -d yes --order lex "get correct Fibonacci"
   Testing started at 18:38 ...
   Process finished with exit code 0
3. Try uncommenting `CHECK(result4 == 5);` in `FibTest.cpp` and see the output of a failed check.
    ```
    /Users/tom/Documents/NYU/CLion/cmake-build-debug/Catch_tests/Catch_tests_run -r xml -d yes --order lex "get correct Fibonacci"
    Testing started at 18:46 ...

    /Users/tom/Documents/NYU/CLion/Catch_tests/FibTest.cpp:25: Failure:
    CHECK(result4 == 5)
    with expansion:
    3 == 5

    Process finished with exit code 1
   
## Add your test
1. Follow what is in `FibTest.cpp` or [Catch2 Tutorial](https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md)
2. If you created a new file, make sure you add the file name to `add_executable(Catch_tests_run FibTest.cpp)` or create a new executable in `Catch_tests/CMakeLists.txt`.
3. If your code is in a new lib/folder, make sure you add the folder name to `target_link_libraries(Catch_tests_run Fib_lib)` or add the target with the executable you want `Catch_tests/CMakeLists.txt`.
4. If you wish to test your code in `main.cpp`, make sure you add your lib/folder name to `/CMakeLists.txt` in the **base directory** and include your header file in the `main.cpp` file.