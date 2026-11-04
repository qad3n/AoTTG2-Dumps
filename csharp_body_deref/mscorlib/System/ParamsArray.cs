// ==================== AoTTG2 cross-reference ====================
// Type: System.ParamsArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000125")]
internal readonly struct ParamsArray
{
	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object[] s_oneArgArray;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object[] s_twoArgArray;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly object[] s_threeArgArray;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _arg0;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x8")]
	private readonly object _arg1;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _arg2;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x18")]
	private readonly object[] _args;

	[Token(Token = "0x170000A2")]
	public int Length
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x1A07BE0", Offset = "0x1A061E0", VA = "0x181A07BE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public object this[int index]
	{
		[Token(Token = "0x6000988")]
		[Address(RVA = "0x1B46080", Offset = "0x1B44680", VA = "0x181B46080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x1B45E90", Offset = "0x1B44490", VA = "0x181B45E90")]
	public ParamsArray(object arg0)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x1B45FD0", Offset = "0x1B445D0", VA = "0x181B45FD0")]
	public ParamsArray(object arg0, object arg1)
	{
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x1B45F30", Offset = "0x1B44530", VA = "0x181B45F30")]
	public ParamsArray(object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x1B45DD0", Offset = "0x1B443D0", VA = "0x181B45DD0")]
	public ParamsArray(object[] args)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x1B45C90", Offset = "0x1B44290", VA = "0x181B45C90")]
	private object GetAtSlow(int index)
	{
		return null;
	}
}
