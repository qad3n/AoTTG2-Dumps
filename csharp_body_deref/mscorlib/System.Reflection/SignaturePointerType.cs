// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignaturePointerType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000528")]
internal sealed class SignaturePointerType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x17000506")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x6002574")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000507")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x6002575")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000508")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x6002577")]
		[Address(RVA = "0x1A56300", Offset = "0x1A54900", VA = "0x181A56300", Slot = "136")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002570")]
	[Address(RVA = "0x1A55A50", Offset = "0x1A54050", VA = "0x181A55A50")]
	internal SignaturePointerType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x6002571")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002572")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002573")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002576")]
	[Address(RVA = "0x1A562B0", Offset = "0x1A548B0", VA = "0x181A562B0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
