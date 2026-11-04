// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Cycle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Cycle.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Cycle.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20008B8")]
public class Cycle<T> where T : Enum
{
	[Token(Token = "0x4002B53")]
	[FieldOffset(Offset = "0x0")]
	private T[] values;

	[Token(Token = "0x4002B54")]
	[FieldOffset(Offset = "0x0")]
	private int index;

	[Token(Token = "0x6005311")]
	public Cycle()
	{
	}

	[Token(Token = "0x6005312")]
	public T Next()
	{
		return (T)null;
	}

	[Token(Token = "0x6005313")]
	public T Previous()
	{
		return (T)null;
	}

	[Token(Token = "0x6005314")]
	public T Current()
	{
		return (T)null;
	}

	[Token(Token = "0x6005315")]
	public T Set(T value)
	{
		return (T)null;
	}
}
