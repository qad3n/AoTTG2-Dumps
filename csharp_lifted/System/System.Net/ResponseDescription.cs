// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ResponseDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200026D")]
internal class ResponseDescription
{
	[Token(Token = "0x40008EA")]
	[FieldOffset(Offset = "0x10")]
	internal bool Multiline;

	[Token(Token = "0x40008EB")]
	[FieldOffset(Offset = "0x14")]
	internal int Status;

	[Token(Token = "0x40008EC")]
	[FieldOffset(Offset = "0x18")]
	internal string StatusDescription;

	[Token(Token = "0x40008ED")]
	[FieldOffset(Offset = "0x20")]
	internal StringBuilder StatusBuffer;

	[Token(Token = "0x40008EE")]
	[FieldOffset(Offset = "0x28")]
	internal string StatusCodeString;

	[Token(Token = "0x17000394")]
	internal bool PositiveIntermediate
	{
		[Token(Token = "0x600110B")]
		[Address(RVA = "0x62975C0", Offset = "0x62965C0", VA = "0x62975C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000395")]
	internal bool PositiveCompletion
	{
		[Token(Token = "0x600110C")]
		[Address(RVA = "0x62975D0", Offset = "0x62965D0", VA = "0x62975D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000396")]
	internal bool TransientFailure
	{
		[Token(Token = "0x600110D")]
		[Address(RVA = "0x62975E0", Offset = "0x62965E0", VA = "0x62975E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000397")]
	internal bool PermanentFailure
	{
		[Token(Token = "0x600110E")]
		[Address(RVA = "0x62975F0", Offset = "0x62965F0", VA = "0x62975F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000398")]
	internal bool InvalidStatusCode
	{
		[Token(Token = "0x600110F")]
		[Address(RVA = "0x6297600", Offset = "0x6296600", VA = "0x6297600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x6297620", Offset = "0x6296620", VA = "0x6297620")]
	public ResponseDescription()
	{
	}
}
