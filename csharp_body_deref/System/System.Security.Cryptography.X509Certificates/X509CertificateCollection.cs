// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Serializable]
[Token(Token = "0x200013E")]
public class X509CertificateCollection : CollectionBase
{
	[Token(Token = "0x200013F")]
	public class X509CertificateEnumerator : IEnumerator
	{
		[Token(Token = "0x40005B4")]
		[FieldOffset(Offset = "0x10")]
		private IEnumerator enumerator;

		[Token(Token = "0x1700016B")]
		public X509Certificate Current
		{
			[Token(Token = "0x60007BA")]
			[Address(RVA = "0x28878D0", Offset = "0x2885ED0", VA = "0x1828878D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60007BB")]
			[Address(RVA = "0x2887810", Offset = "0x2885E10", VA = "0x182887810", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x2887860", Offset = "0x2885E60", VA = "0x182887860")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60007BC")]
		[Address(RVA = "0x2887770", Offset = "0x2885D70", VA = "0x182887770", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60007BD")]
		[Address(RVA = "0x28877C0", Offset = "0x2885DC0", VA = "0x1828877C0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x2887720", Offset = "0x2885D20", VA = "0x182887720")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016A")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x2887680", Offset = "0x2885C80", VA = "0x182887680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x1924500", Offset = "0x1922B00", VA = "0x181924500")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x2887520", Offset = "0x2885B20", VA = "0x182887520")]
	public X509CertificateCollection(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x2887400", Offset = "0x2885A00", VA = "0x182887400")]
	public int Add(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x28872A0", Offset = "0x28858A0", VA = "0x1828872A0")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x2887480", Offset = "0x2885A80", VA = "0x182887480")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
