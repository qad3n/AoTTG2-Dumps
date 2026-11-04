// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicFileLicenseProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B7")]
public class LicFileLicenseProvider : LicenseProvider
{
	[Token(Token = "0x20001B8")]
	private class LicFileLicense : License
	{
		[Token(Token = "0x40006AE")]
		[FieldOffset(Offset = "0x10")]
		private LicFileLicenseProvider _owner;

		[Token(Token = "0x17000232")]
		public override string LicenseKey
		{
			[Token(Token = "0x6000B1B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public LicFileLicense(LicFileLicenseProvider owner, string key)
		{
		}

		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x289F890", Offset = "0x289DE90", VA = "0x18289F890", Slot = "6")]
		public override void Dispose()
		{
		}
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x289F850", Offset = "0x289DE50", VA = "0x18289F850", Slot = "5")]
	protected virtual bool IsKeyValid(string key, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x289F370", Offset = "0x289D970", VA = "0x18289F370", Slot = "6")]
	protected virtual string GetKey(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x289F410", Offset = "0x289DA10", VA = "0x18289F410", Slot = "4")]
	public override License GetLicense(LicenseContext context, Type type, object instance, bool allowExceptions)
	{
		return null;
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public LicFileLicenseProvider()
	{
	}
}
