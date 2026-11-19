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
[Token(Token = "0x20000FF")]
public class X509CertificateCollection : CollectionBase
{
	[Token(Token = "0x2000100")]
	public class X509CertificateEnumerator : IEnumerator
	{
		[Token(Token = "0x40004E5")]
		[FieldOffset(Offset = "0x10")]
		private IEnumerator enumerator;

		[Token(Token = "0x1700013C")]
		public X509Certificate Current
		{
			[Token(Token = "0x60005FB")]
			[Address(RVA = "0x62152A0", Offset = "0x62142A0", VA = "0x62152A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700013D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005FC")]
			[Address(RVA = "0x6215380", Offset = "0x6214380", VA = "0x6215380", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x62151B0", Offset = "0x62141B0", VA = "0x62151B0")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x6215420", Offset = "0x6214420", VA = "0x6215420", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x62154B0", Offset = "0x62144B0", VA = "0x62154B0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x6215550", Offset = "0x6214550", VA = "0x6215550")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x62150D0", Offset = "0x62140D0", VA = "0x62150D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x6210BF0", Offset = "0x620FBF0", VA = "0x6210BF0")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x6214F70", Offset = "0x6213F70", VA = "0x6214F70")]
	public X509CertificateCollection(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x6214FA0", Offset = "0x6213FA0", VA = "0x6214FA0")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x6215160", Offset = "0x6214160", VA = "0x6215160")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x6215270", Offset = "0x6214270", VA = "0x6215270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
