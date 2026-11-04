// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X520
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x200001B")]
public class X520
{
	[Token(Token = "0x200001C")]
	public abstract class AttributeTypeAndValue
	{
		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x10")]
		private string oid;

		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x18")]
		private string attrValue;

		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x20")]
		private int upperBound;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x24")]
		private byte encoding;

		[Token(Token = "0x1700004C")]
		public string Value
		{
			[Token(Token = "0x60000EA")]
			[Address(RVA = "0x1912DC0", Offset = "0x19113C0", VA = "0x181912DC0")]
			set
			{
			}
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x1912D30", Offset = "0x1911330", VA = "0x181912D30")]
		protected AttributeTypeAndValue(string oid, int upperBound)
		{
		}

		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x1912D80", Offset = "0x1911380", VA = "0x181912D80")]
		protected AttributeTypeAndValue(string oid, int upperBound, byte encoding)
		{
		}

		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x19129A0", Offset = "0x1910FA0", VA = "0x1819129A0")]
		internal ASN1 GetASN1(byte encoding)
		{
			return null;
		}

		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x1912990", Offset = "0x1910F90", VA = "0x181912990")]
		internal ASN1 GetASN1()
		{
			return null;
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x1912CC0", Offset = "0x19112C0", VA = "0x181912CC0")]
		private byte SelectBestEncoding()
		{
			return default(byte);
		}
	}

	[Token(Token = "0x200001D")]
	public class CommonName : AttributeTypeAndValue
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x1916150", Offset = "0x1914750", VA = "0x181916150")]
		public CommonName()
		{
		}
	}

	[Token(Token = "0x200001E")]
	public class SerialNumber : AttributeTypeAndValue
	{
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x19200B0", Offset = "0x191E6B0", VA = "0x1819200B0")]
		public SerialNumber()
		{
		}
	}

	[Token(Token = "0x200001F")]
	public class LocalityName : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x1917790", Offset = "0x1915D90", VA = "0x181917790")]
		public LocalityName()
		{
		}
	}

	[Token(Token = "0x2000020")]
	public class StateOrProvinceName : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x19211C0", Offset = "0x191F7C0", VA = "0x1819211C0")]
		public StateOrProvinceName()
		{
		}
	}

	[Token(Token = "0x2000021")]
	public class OrganizationName : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x1917830", Offset = "0x1915E30", VA = "0x181917830")]
		public OrganizationName()
		{
		}
	}

	[Token(Token = "0x2000022")]
	public class OrganizationalUnitName : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x1917890", Offset = "0x1915E90", VA = "0x181917890")]
		public OrganizationalUnitName()
		{
		}
	}

	[Token(Token = "0x2000023")]
	public class EmailAddress : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x19171A0", Offset = "0x19157A0", VA = "0x1819171A0")]
		public EmailAddress()
		{
		}
	}

	[Token(Token = "0x2000024")]
	public class DomainComponent : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x1917140", Offset = "0x1915740", VA = "0x181917140")]
		public DomainComponent()
		{
		}
	}

	[Token(Token = "0x2000025")]
	public class UserId : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x19212E0", Offset = "0x191F8E0", VA = "0x1819212E0")]
		public UserId()
		{
		}
	}

	[Token(Token = "0x2000026")]
	public class Oid : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x19177F0", Offset = "0x1915DF0", VA = "0x1819177F0")]
		public Oid(string oid)
		{
		}
	}

	[Token(Token = "0x2000027")]
	public class Title : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x1921280", Offset = "0x191F880", VA = "0x181921280")]
		public Title()
		{
		}
	}

	[Token(Token = "0x2000028")]
	public class CountryName : AttributeTypeAndValue
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x19166E0", Offset = "0x1914CE0", VA = "0x1819166E0")]
		public CountryName()
		{
		}
	}

	[Token(Token = "0x2000029")]
	public class DnQualifier : AttributeTypeAndValue
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x19170E0", Offset = "0x19156E0", VA = "0x1819170E0")]
		public DnQualifier()
		{
		}
	}

	[Token(Token = "0x200002A")]
	public class Surname : AttributeTypeAndValue
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x1921220", Offset = "0x191F820", VA = "0x181921220")]
		public Surname()
		{
		}
	}

	[Token(Token = "0x200002B")]
	public class GivenName : AttributeTypeAndValue
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x19176C0", Offset = "0x1915CC0", VA = "0x1819176C0")]
		public GivenName()
		{
		}
	}

	[Token(Token = "0x200002C")]
	public class Initial : AttributeTypeAndValue
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x1917720", Offset = "0x1915D20", VA = "0x181917720")]
		public Initial()
		{
		}
	}
}
