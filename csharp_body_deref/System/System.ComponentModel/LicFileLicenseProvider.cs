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
			[Address(RVA = "0x48954F0", Offset = "0x48954F0", VA = "0x48954F0", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x4895480", Offset = "0x4895480", VA = "0x4895480")]
		public LicFileLicense(LicFileLicenseProvider owner, string key)
		{
		}

		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x4895500", Offset = "0x4895500", VA = "0x4895500", Slot = "6")]
		public override void Dispose()
		{
		}
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x4894F10", Offset = "0x4894F10", VA = "0x4894F10", Slot = "5")]
	protected virtual bool IsKeyValid(string key, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x4894F50", Offset = "0x4894F50", VA = "0x4894F50", Slot = "6")]
	protected virtual string GetKey(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x4895000", Offset = "0x4895000", VA = "0x4895000", Slot = "4")]
	public override License GetLicense(LicenseContext context, Type type, object instance, bool allowExceptions)
	{
		return null;
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x48954C0", Offset = "0x48954C0", VA = "0x48954C0")]
	public LicFileLicenseProvider()
	{
	}
}
