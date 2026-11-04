// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IBitArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001AF")]
public interface IBitArray
{
	[Token(Token = "0x1700019C")]
	uint capacity
	{
		[Token(Token = "0x6000CCF")]
		get;
	}

	[Token(Token = "0x1700019D")]
	bool allFalse
	{
		[Token(Token = "0x6000CD0")]
		get;
	}

	[Token(Token = "0x1700019E")]
	bool allTrue
	{
		[Token(Token = "0x6000CD1")]
		get;
	}

	[Token(Token = "0x1700019F")]
	bool this[uint index]
	{
		[Token(Token = "0x6000CD2")]
		get;
		[Token(Token = "0x6000CD3")]
		set;
	}

	[Token(Token = "0x170001A0")]
	string humanizedData
	{
		[Token(Token = "0x6000CD4")]
		get;
	}

	[Token(Token = "0x6000CD5")]
	IBitArray BitAnd(IBitArray other);

	[Token(Token = "0x6000CD6")]
	IBitArray BitOr(IBitArray other);

	[Token(Token = "0x6000CD7")]
	IBitArray BitNot();
}
