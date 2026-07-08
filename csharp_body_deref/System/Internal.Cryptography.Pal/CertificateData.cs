using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Internal.Cryptography.Pal;

[Token(Token = "0x200006E")]
internal struct CertificateData
{
	[Token(Token = "0x200006F")]
	internal struct AlgorithmIdentifier
	{
		[Token(Token = "0x4000151")]
		[FieldOffset(Offset = "0x0")]
		internal string AlgorithmId;

		[Token(Token = "0x4000152")]
		[FieldOffset(Offset = "0x8")]
		internal byte[] Parameters;
	}

	[Token(Token = "0x2000070")]
	[CompilerGenerated]
	private sealed class _003CReadReverseRdns_003Ed__21 : IEnumerable<KeyValuePair<string, string>>, IEnumerable, IEnumerator<KeyValuePair<string, string>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000153")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000154")]
		[FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, string> _003C_003E2__current;

		[Token(Token = "0x4000155")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000156")]
		[FieldOffset(Offset = "0x30")]
		private X500DistinguishedName name;

		[Token(Token = "0x4000157")]
		[FieldOffset(Offset = "0x38")]
		public X500DistinguishedName _003C_003E3__name;

		[Token(Token = "0x4000158")]
		[FieldOffset(Offset = "0x40")]
		private Stack<DerSequenceReader> _003CrdnReaders_003E5__2;

		[Token(Token = "0x4000159")]
		[FieldOffset(Offset = "0x48")]
		private DerSequenceReader _003CrdnReader_003E5__3;

		[Token(Token = "0x17000053")]
		private KeyValuePair<string, string> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002ECurrent
		{
			[Token(Token = "0x600018B")]
			[Address(RVA = "0x454A270", Offset = "0x454A270", VA = "0x454A270", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, string>);
			}
		}

		[Token(Token = "0x17000054")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600018D")]
			[Address(RVA = "0x454A2C0", Offset = "0x454A2C0", VA = "0x454A2C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4549F50", Offset = "0x4549F50", VA = "0x4549F50")]
		[DebuggerHidden]
		public _003CReadReverseRdns_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4549F80", Offset = "0x4549F80", VA = "0x4549F80", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4549F90", Offset = "0x4549F90", VA = "0x4549F90", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600018C")]
		[Address(RVA = "0x454A280", Offset = "0x454A280", VA = "0x454A280", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600018E")]
		[Address(RVA = "0x454A310", Offset = "0x454A310", VA = "0x454A310", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<KeyValuePair<string, string>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600018F")]
		[Address(RVA = "0x454A3B0", Offset = "0x454A3B0", VA = "0x454A3B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x0")]
	internal byte[] RawData;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x8")]
	internal byte[] SubjectPublicKeyInfo;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x10")]
	internal int Version;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] SerialNumber;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x20")]
	internal AlgorithmIdentifier TbsSignature;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x30")]
	internal X500DistinguishedName Issuer;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x38")]
	internal DateTime NotBefore;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x40")]
	internal DateTime NotAfter;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x48")]
	internal X500DistinguishedName Subject;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x50")]
	internal AlgorithmIdentifier PublicKeyAlgorithm;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x60")]
	internal byte[] PublicKey;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x68")]
	internal byte[] IssuerUniqueId;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x70")]
	internal byte[] SubjectUniqueId;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x78")]
	internal List<X509Extension> Extensions;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x80")]
	internal AlgorithmIdentifier SignatureAlgorithm;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x90")]
	internal byte[] SignatureValue;

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x45486D0", Offset = "0x45486D0", VA = "0x45486D0")]
	internal CertificateData(byte[] rawData)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x4548FE0", Offset = "0x4548FE0", VA = "0x4548FE0")]
	public string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x45497B0", Offset = "0x45497B0", VA = "0x45497B0")]
	private static string GetSimpleNameInfo(X500DistinguishedName name)
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4549CD0", Offset = "0x4549CD0", VA = "0x4549CD0")]
	private static string FindAltNameMatch(byte[] extensionBytes, GeneralNameType matchType, string otherOid)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4549ED0", Offset = "0x4549ED0", VA = "0x4549ED0")]
	[IteratorStateMachine(typeof(_003CReadReverseRdns_003Ed__21))]
	private static IEnumerable<KeyValuePair<string, string>> ReadReverseRdns(X500DistinguishedName name)
	{
		return null;
	}
}
