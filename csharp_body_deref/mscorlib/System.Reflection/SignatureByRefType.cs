// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureByRefType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000525")]
internal sealed class SignatureByRefType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x170004E8")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x600253F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E9")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x6002540")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EA")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x6002542")]
		[Address(RVA = "0x1A55AA0", Offset = "0x1A540A0", VA = "0x181A55AA0", Slot = "136")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600253B")]
	[Address(RVA = "0x1A55A50", Offset = "0x1A54050", VA = "0x181A55A50")]
	internal SignatureByRefType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x600253C")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600253D")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600253E")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002541")]
	[Address(RVA = "0x1A55A00", Offset = "0x1A54000", VA = "0x181A55A00", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
