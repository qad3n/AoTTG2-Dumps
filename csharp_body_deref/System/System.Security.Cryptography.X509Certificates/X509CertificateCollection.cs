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
			[Address(RVA = "0x46152B0", Offset = "0x46152B0", VA = "0x46152B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000133")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005D2")]
			[Address(RVA = "0x4615390", Offset = "0x4615390", VA = "0x4615390", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x46151C0", Offset = "0x46151C0", VA = "0x46151C0")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x4615430", Offset = "0x4615430", VA = "0x4615430", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x46154C0", Offset = "0x46154C0", VA = "0x46154C0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x4615560", Offset = "0x4615560", VA = "0x4615560")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x46150E0", Offset = "0x46150E0", VA = "0x46150E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4610630", Offset = "0x4610630", VA = "0x4610630")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4614F80", Offset = "0x4614F80", VA = "0x4614F80")]
	public X509CertificateCollection(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x4614FA0", Offset = "0x4614FA0", VA = "0x4614FA0")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x4615170", Offset = "0x4615170", VA = "0x4615170")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x4615280", Offset = "0x4615280", VA = "0x4615280", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
