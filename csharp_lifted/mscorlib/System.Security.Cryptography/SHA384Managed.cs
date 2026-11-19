// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA384Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200030B")]
[ComVisible(true)]
public class SHA384Managed : SHA384
{
	[Token(Token = "0x4000CE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000CE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ulong _count;

	[Token(Token = "0x4000CE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong[] _stateSHA384;

	[Token(Token = "0x4000CE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ulong[] _W;

	[Token(Token = "0x4000CE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ulong[] _K;

	[Token(Token = "0x6001AAE")]
	[Address(RVA = "0x5350270", Offset = "0x534F270", VA = "0x5350270")]
	public SHA384Managed()
	{
	}

	[Token(Token = "0x6001AAF")]
	[Address(RVA = "0x5350530", Offset = "0x534F530", VA = "0x5350530", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001AB0")]
	[Address(RVA = "0x5350570", Offset = "0x534F570", VA = "0x5350570", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AB1")]
	[Address(RVA = "0x5350750", Offset = "0x534F750", VA = "0x5350750", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001AB2")]
	[Address(RVA = "0x5350460", Offset = "0x534F460", VA = "0x5350460")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001AB3")]
	[Address(RVA = "0x5350580", Offset = "0x534F580", VA = "0x5350580")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AB4")]
	[Address(RVA = "0x5350760", Offset = "0x534F760", VA = "0x5350760")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001AB5")]
	[Address(RVA = "0x5350910", Offset = "0x534F910", VA = "0x5350910")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x5351A10", Offset = "0x5350A10", VA = "0x5351A10")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x5351990", Offset = "0x5350990", VA = "0x5351990")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x5351A00", Offset = "0x5350A00", VA = "0x5351A00")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x53519A0", Offset = "0x53509A0", VA = "0x53519A0")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x5351930", Offset = "0x5350930", VA = "0x5351930")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x5351A20", Offset = "0x5350A20", VA = "0x5351A20")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x5351A80", Offset = "0x5350A80", VA = "0x5351A80")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x53517B0", Offset = "0x53507B0", VA = "0x53517B0")]
	private unsafe static void SHA384Expand(ulong* x)
	{
	}
}
