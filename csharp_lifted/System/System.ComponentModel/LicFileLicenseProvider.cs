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

[Token(Token = "0x2000178")]
public class LicFileLicenseProvider : LicenseProvider
{
	[Token(Token = "0x2000179")]
	private class LicFileLicense : License
	{
		[Token(Token = "0x40005DF")]
		[FieldOffset(Offset = "0x10")]
		private LicFileLicenseProvider _owner;

		[Token(Token = "0x17000203")]
		public override string LicenseKey
		{
			[Token(Token = "0x600095B")]
			[Address(RVA = "0x6235500", Offset = "0x6234500", VA = "0x6235500", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600095A")]
		[Address(RVA = "0x6235490", Offset = "0x6234490", VA = "0x6235490")]
		public LicFileLicense(LicFileLicenseProvider owner, string key)
		{
		}

		[Token(Token = "0x600095C")]
		[Address(RVA = "0x6235510", Offset = "0x6234510", VA = "0x6235510", Slot = "6")]
		public override void Dispose()
		{
		}
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x6234F50", Offset = "0x6233F50", VA = "0x6234F50", Slot = "5")]
	protected virtual bool IsKeyValid(string key, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x6234F80", Offset = "0x6233F80", VA = "0x6234F80", Slot = "6")]
	protected virtual string GetKey(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x6235030", Offset = "0x6234030", VA = "0x6235030", Slot = "4")]
	public override License GetLicense(LicenseContext context, Type type, object instance, bool allowExceptions)
	{
		return null;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x62354D0", Offset = "0x62344D0", VA = "0x62354D0")]
	public LicFileLicenseProvider()
	{
	}
}
