// ==================== AoTTG2 cross-reference ====================
// Type: Internal.Cryptography.Pal.CertificateData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Internal.Cryptography.Pal;

[Token(Token = "0x20000AF")]
internal struct CertificateData
{
	[Token(Token = "0x20000B0")]
	internal struct AlgorithmIdentifier
	{
		[Token(Token = "0x4000222")]
		[FieldOffset(Offset = "0x0")]
		internal string AlgorithmId;

		[Token(Token = "0x4000223")]
		[FieldOffset(Offset = "0x8")]
		internal byte[] Parameters;
	}

	[Token(Token = "0x20000B1")]
	[CompilerGenerated]
	private sealed class _003CReadReverseRdns_003Ed__21 : IEnumerable<KeyValuePair<string, string>>, IEnumerable, IEnumerator<KeyValuePair<string, string>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000224")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000225")]
		[FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, string> _003C_003E2__current;

		[Token(Token = "0x4000226")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000227")]
		[FieldOffset(Offset = "0x30")]
		private X500DistinguishedName name;

		[Token(Token = "0x4000228")]
		[FieldOffset(Offset = "0x38")]
		public X500DistinguishedName _003C_003E3__name;

		[Token(Token = "0x4000229")]
		[FieldOffset(Offset = "0x40")]
		private Stack<DerSequenceReader> _003CrdnReaders_003E5__2;

		[Token(Token = "0x400022A")]
		[FieldOffset(Offset = "0x48")]
		private DerSequenceReader _003CrdnReader_003E5__3;

		[Token(Token = "0x17000082")]
		private KeyValuePair<string, string> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002ECurrent
		{
			[Token(Token = "0x600034A")]
			[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, string>);
			}
		}

		[Token(Token = "0x17000083")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600034C")]
			[Address(RVA = "0x2841C20", Offset = "0x2840220", VA = "0x182841C20", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000347")]
		[Address(RVA = "0x8E81C0", Offset = "0x8E67C0", VA = "0x1808E81C0")]
		[DebuggerHidden]
		public _003CReadReverseRdns_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000348")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000349")]
		[Address(RVA = "0x28418A0", Offset = "0x283FEA0", VA = "0x1828418A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600034B")]
		[Address(RVA = "0x2841BE0", Offset = "0x28401E0", VA = "0x182841BE0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600034D")]
		[Address(RVA = "0x2841B40", Offset = "0x2840140", VA = "0x182841B40", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<KeyValuePair<string, string>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600034E")]
		[Address(RVA = "0x2841B40", Offset = "0x2840140", VA = "0x182841B40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x0")]
	internal byte[] RawData;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x8")]
	internal byte[] SubjectPublicKeyInfo;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x10")]
	internal int Version;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] SerialNumber;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x20")]
	internal AlgorithmIdentifier TbsSignature;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x30")]
	internal X500DistinguishedName Issuer;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x38")]
	internal DateTime NotBefore;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x40")]
	internal DateTime NotAfter;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x48")]
	internal X500DistinguishedName Subject;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x50")]
	internal AlgorithmIdentifier PublicKeyAlgorithm;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x60")]
	internal byte[] PublicKey;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x68")]
	internal byte[] IssuerUniqueId;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x70")]
	internal byte[] SubjectUniqueId;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x78")]
	internal List<X509Extension> Extensions;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x80")]
	internal AlgorithmIdentifier SignatureAlgorithm;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x90")]
	internal byte[] SignatureValue;

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x282E3E0", Offset = "0x282C9E0", VA = "0x18282E3E0")]
	internal CertificateData(byte[] rawData)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x282DB20", Offset = "0x282C120", VA = "0x18282DB20")]
	public string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x282E020", Offset = "0x282C620", VA = "0x18282E020")]
	private static string GetSimpleNameInfo(X500DistinguishedName name)
	{
		return null;
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x282D970", Offset = "0x282BF70", VA = "0x18282D970")]
	private static string FindAltNameMatch(byte[] extensionBytes, GeneralNameType matchType, string otherOid)
	{
		return null;
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x282E360", Offset = "0x282C960", VA = "0x18282E360")]
	[IteratorStateMachine(typeof(_003CReadReverseRdns_003Ed__21))]
	private static IEnumerable<KeyValuePair<string, string>> ReadReverseRdns(X500DistinguishedName name)
	{
		return null;
	}
}
