// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.DeflateInput
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000013")]
internal sealed class DeflateInput
{
	[Token(Token = "0x2000014")]
	internal readonly struct InputState
	{
		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _count;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x4")]
		internal readonly int _startIndex;

		[Token(Token = "0x600005E")]
		[Address(RVA = "0x5F64110", Offset = "0x5F63110", VA = "0x5F64110")]
		internal InputState(int count, int startIndex)
		{
		}
	}

	[Token(Token = "0x1700000B")]
	internal byte[] Buffer
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x5F640A0", Offset = "0x5F630A0", VA = "0x5F640A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x5F640B0", Offset = "0x5F630B0", VA = "0x5F640B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	internal int Count
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x5F640C0", Offset = "0x5F630C0", VA = "0x5F640C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x5F640D0", Offset = "0x5F630D0", VA = "0x5F640D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	internal int StartIndex
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x5F640E0", Offset = "0x5F630E0", VA = "0x5F640E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x5F640F0", Offset = "0x5F630F0", VA = "0x5F640F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x5F64040", Offset = "0x5F63040", VA = "0x5F64040")]
	internal void ConsumeBytes(int n)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x5F64100", Offset = "0x5F63100", VA = "0x5F64100")]
	internal InputState DumpState()
	{
		return default(InputState);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x5F64120", Offset = "0x5F63120", VA = "0x5F64120")]
	internal void RestoreState(InputState state)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x5F64130", Offset = "0x5F63130", VA = "0x5F64130")]
	public DeflateInput()
	{
	}
}
