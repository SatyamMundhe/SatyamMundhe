class GenericMethod {
    public static <T> void  Display(T Arr[])
    {
        for(int i = 0; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

    }
    public static void main(String ar[])
    {
        Integer iArr[] = {10,20,30,40,50};

        Display(iArr);

        Character cArr[] = {'a','b','c','d','e'};
        Display(cArr);

        float fArr[] = {10.1f,20.3f,30.3f,20.5f};
        Display(fArr);

    }


}
