using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002AC")]
public class LicFileLicenseProvider : LicenseProvider
{
	[Token(Token = "0x20002AD")]
	private class LicFileLicense : License
	{
		[Token(Token = "0x4000D77")]
		[FieldOffset(Offset = "0x10")]
		private LicFileLicenseProvider _owner;

		[Token(Token = "0x170003C3")]
		public override string LicenseKey
		{
			[Token(Token = "0x60010D3")]
			[Address(RVA = "0x45703F0", Offset = "0x45703F0", VA = "0x45703F0", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x4570380", Offset = "0x4570380", VA = "0x4570380")]
		public LicFileLicense(LicFileLicenseProvider owner, string key)
		{
		}

		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x4570400", Offset = "0x4570400", VA = "0x4570400", Slot = "6")]
		public override void Dispose()
		{
		}
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x456FE10", Offset = "0x456FE10", VA = "0x456FE10", Slot = "5")]
	protected virtual bool IsKeyValid(string key, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x456FE50", Offset = "0x456FE50", VA = "0x456FE50", Slot = "6")]
	protected virtual string GetKey(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x456FF00", Offset = "0x456FF00", VA = "0x456FF00", Slot = "4")]
	public override License GetLicense(LicenseContext context, Type type, object instance, bool allowExceptions)
	{
		return null;
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x45703C0", Offset = "0x45703C0", VA = "0x45703C0")]
	public LicFileLicenseProvider()
	{
	}
}
