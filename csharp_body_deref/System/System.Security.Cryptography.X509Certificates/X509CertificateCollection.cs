// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Serializable]
[Token(Token = "0x20000FE")]
public class X509CertificateCollection : CollectionBase
{
	[Token(Token = "0x20000FF")]
	public class X509CertificateEnumerator : IEnumerator
	{
		[Token(Token = "0x40004E2")]
		[FieldOffset(Offset = "0x10")]
		private IEnumerator enumerator;

		[Token(Token = "0x17000132")]
		public X509Certificate Current
		{
			[Token(Token = "0x60005D1")]
			[Address(RVA = "0x493A3B0", Offset = "0x493A3B0", VA = "0x493A3B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000133")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005D2")]
			[Address(RVA = "0x493A490", Offset = "0x493A490", VA = "0x493A490", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x493A2C0", Offset = "0x493A2C0", VA = "0x493A2C0")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x493A530", Offset = "0x493A530", VA = "0x493A530", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x493A5C0", Offset = "0x493A5C0", VA = "0x493A5C0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x493A660", Offset = "0x493A660", VA = "0x493A660")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x493A1E0", Offset = "0x493A1E0", VA = "0x493A1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4935730", Offset = "0x4935730", VA = "0x4935730")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x493A080", Offset = "0x493A080", VA = "0x493A080")]
	public X509CertificateCollection(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x493A0A0", Offset = "0x493A0A0", VA = "0x493A0A0")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x493A270", Offset = "0x493A270", VA = "0x493A270")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x493A380", Offset = "0x493A380", VA = "0x493A380", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
