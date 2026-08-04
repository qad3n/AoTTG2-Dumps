// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.AssemblyName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration.Assemblies;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;
using Mono;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200050B")]
[ComVisible(true)]
[ComDefaultInterface(typeof(_AssemblyName))]
[ClassInterface(ClassInterfaceType.None)]
public sealed class AssemblyName : ICloneable, ISerializable, IDeserializationCallback, _AssemblyName
{
	[Token(Token = "0x40014FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4001500")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string codebase;

	[Token(Token = "0x4001501")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int major;

	[Token(Token = "0x4001502")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int minor;

	[Token(Token = "0x4001503")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int build;

	[Token(Token = "0x4001504")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int revision;

	[Token(Token = "0x4001505")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CultureInfo cultureinfo;

	[Token(Token = "0x4001506")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AssemblyNameFlags flags;

	[Token(Token = "0x4001507")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private AssemblyHashAlgorithm hashalg;

	[Token(Token = "0x4001508")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private StrongNameKeyPair keypair;

	[Token(Token = "0x4001509")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private byte[] publicKey;

	[Token(Token = "0x400150A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] keyToken;

	[Token(Token = "0x400150B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AssemblyVersionCompatibility versioncompat;

	[Token(Token = "0x400150C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Version version;

	[Token(Token = "0x400150D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private ProcessorArchitecture processor_architecture;

	[Token(Token = "0x400150E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private AssemblyContentType contentType;

	[Token(Token = "0x17000542")]
	public string Name
	{
		[Token(Token = "0x60025ED")]
		[Address(RVA = "0x3BDCB80", Offset = "0x3BDCB80", VA = "0x3BDCB80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60025EE")]
		[Address(RVA = "0x3BDCB90", Offset = "0x3BDCB90", VA = "0x3BDCB90")]
		set
		{
		}
	}

	[Token(Token = "0x17000543")]
	public CultureInfo CultureInfo
	{
		[Token(Token = "0x60025EF")]
		[Address(RVA = "0x3BDCBA0", Offset = "0x3BDCBA0", VA = "0x3BDCBA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60025F0")]
		[Address(RVA = "0x3BDCBB0", Offset = "0x3BDCBB0", VA = "0x3BDCBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000544")]
	public AssemblyNameFlags Flags
	{
		[Token(Token = "0x60025F1")]
		[Address(RVA = "0x3BDCBC0", Offset = "0x3BDCBC0", VA = "0x3BDCBC0")]
		get
		{
			return default(AssemblyNameFlags);
		}
		[Token(Token = "0x60025F2")]
		[Address(RVA = "0x3BDCBD0", Offset = "0x3BDCBD0", VA = "0x3BDCBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000545")]
	public string FullName
	{
		[Token(Token = "0x60025F3")]
		[Address(RVA = "0x3BDCBE0", Offset = "0x3BDCBE0", VA = "0x3BDCBE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000546")]
	public Version Version
	{
		[Token(Token = "0x60025F4")]
		[Address(RVA = "0x3BDD130", Offset = "0x3BDD130", VA = "0x3BDD130")]
		get
		{
			return null;
		}
		[Token(Token = "0x60025F5")]
		[Address(RVA = "0x3BDBD00", Offset = "0x3BDBD00", VA = "0x3BDBD00")]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	private bool IsPublicKeyValid
	{
		[Token(Token = "0x60025F9")]
		[Address(RVA = "0x3BDD380", Offset = "0x3BDD380", VA = "0x3BDD380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000548")]
	public string CultureName
	{
		[Token(Token = "0x6002601")]
		[Address(RVA = "0x3BDD910", Offset = "0x3BDD910", VA = "0x3BDD910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60025E9")]
	[Address(RVA = "0x3BDBCB0", Offset = "0x3BDBCB0", VA = "0x3BDBCB0")]
	public AssemblyName()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025EA")]
	[Address(RVA = "0x3BDC200", Offset = "0x3BDC200", VA = "0x3BDC200")]
	private static extern bool ParseAssemblyName(IntPtr name, out Mono.MonoAssemblyName aname, out bool is_version_definited, out bool is_token_defined);

	[Token(Token = "0x60025EB")]
	[Address(RVA = "0x3BCF000", Offset = "0x3BCF000", VA = "0x3BCF000")]
	public AssemblyName(string assemblyName)
	{
	}

	[Token(Token = "0x60025EC")]
	[Address(RVA = "0x3BDC630", Offset = "0x3BDC630", VA = "0x3BDC630")]
	internal AssemblyName(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x60025F6")]
	[Address(RVA = "0x3BDD140", Offset = "0x3BDD140", VA = "0x3BDD140", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60025F7")]
	[Address(RVA = "0x3BDD160", Offset = "0x3BDD160", VA = "0x3BDD160")]
	public byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x60025F8")]
	[Address(RVA = "0x3BDD170", Offset = "0x3BDD170", VA = "0x3BDD170")]
	public byte[] GetPublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x60025FA")]
	[Address(RVA = "0x3BDCF40", Offset = "0x3BDCF40", VA = "0x3BDCF40")]
	private byte[] InternalGetPublicKeyToken()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025FB")]
	[Address(RVA = "0x3BDD4D0", Offset = "0x3BDD4D0", VA = "0x3BDD4D0")]
	private unsafe static extern void get_public_token(byte* token, byte* pubkey, int len);

	[Token(Token = "0x60025FC")]
	[Address(RVA = "0x3BDD430", Offset = "0x3BDD430", VA = "0x3BDD430")]
	private byte[] ComputePublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x60025FD")]
	[Address(RVA = "0x3BDBCD0", Offset = "0x3BDBCD0", VA = "0x3BDBCD0")]
	public void SetPublicKey(byte[] publicKey)
	{
	}

	[Token(Token = "0x60025FE")]
	[Address(RVA = "0x3BDD4E0", Offset = "0x3BDD4E0", VA = "0x3BDD4E0", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025FF")]
	[Address(RVA = "0x3BDD7C0", Offset = "0x3BDD7C0", VA = "0x3BDD7C0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002600")]
	[Address(RVA = "0x3BDD8C0", Offset = "0x3BDD8C0", VA = "0x3BDD8C0", Slot = "6")]
	public void OnDeserialization(object sender)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002602")]
	[Address(RVA = "0x3BDD930", Offset = "0x3BDD930", VA = "0x3BDD930")]
	private unsafe static extern Mono.MonoAssemblyName* GetNativeName(IntPtr assembly_ptr);

	[Token(Token = "0x6002603")]
	[Address(RVA = "0x3BDC210", Offset = "0x3BDC210", VA = "0x3BDC210")]
	internal unsafe void FillName(Mono.MonoAssemblyName* native, string codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef)
	{
	}

	[Token(Token = "0x6002604")]
	[Address(RVA = "0x3BDD940", Offset = "0x3BDD940", VA = "0x3BDD940")]
	internal static AssemblyName Create(Assembly assembly, bool fillCodebase)
	{
		return null;
	}
}
