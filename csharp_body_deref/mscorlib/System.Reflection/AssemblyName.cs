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
		[Address(RVA = "0x4EF7060", Offset = "0x4EF7060", VA = "0x4EF7060")]
		get
		{
			return null;
		}
		[Token(Token = "0x60025EE")]
		[Address(RVA = "0x4EF7070", Offset = "0x4EF7070", VA = "0x4EF7070")]
		set
		{
		}
	}

	[Token(Token = "0x17000543")]
	public CultureInfo CultureInfo
	{
		[Token(Token = "0x60025EF")]
		[Address(RVA = "0x4EF7080", Offset = "0x4EF7080", VA = "0x4EF7080")]
		get
		{
			return null;
		}
		[Token(Token = "0x60025F0")]
		[Address(RVA = "0x4EF7090", Offset = "0x4EF7090", VA = "0x4EF7090")]
		set
		{
		}
	}

	[Token(Token = "0x17000544")]
	public AssemblyNameFlags Flags
	{
		[Token(Token = "0x60025F1")]
		[Address(RVA = "0x4EF70A0", Offset = "0x4EF70A0", VA = "0x4EF70A0")]
		get
		{
			return default(AssemblyNameFlags);
		}
		[Token(Token = "0x60025F2")]
		[Address(RVA = "0x4EF70B0", Offset = "0x4EF70B0", VA = "0x4EF70B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000545")]
	public string FullName
	{
		[Token(Token = "0x60025F3")]
		[Address(RVA = "0x4EF70C0", Offset = "0x4EF70C0", VA = "0x4EF70C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000546")]
	public Version Version
	{
		[Token(Token = "0x60025F4")]
		[Address(RVA = "0x4EF7610", Offset = "0x4EF7610", VA = "0x4EF7610")]
		get
		{
			return null;
		}
		[Token(Token = "0x60025F5")]
		[Address(RVA = "0x4EF61E0", Offset = "0x4EF61E0", VA = "0x4EF61E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	private bool IsPublicKeyValid
	{
		[Token(Token = "0x60025F9")]
		[Address(RVA = "0x4EF7860", Offset = "0x4EF7860", VA = "0x4EF7860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000548")]
	public string CultureName
	{
		[Token(Token = "0x6002601")]
		[Address(RVA = "0x4EF7DF0", Offset = "0x4EF7DF0", VA = "0x4EF7DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60025E9")]
	[Address(RVA = "0x4EF6190", Offset = "0x4EF6190", VA = "0x4EF6190")]
	public AssemblyName()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025EA")]
	[Address(RVA = "0x4EF66E0", Offset = "0x4EF66E0", VA = "0x4EF66E0")]
	private static extern bool ParseAssemblyName(IntPtr name, out Mono.MonoAssemblyName aname, out bool is_version_definited, out bool is_token_defined);

	[Token(Token = "0x60025EB")]
	[Address(RVA = "0x4EE94E0", Offset = "0x4EE94E0", VA = "0x4EE94E0")]
	public AssemblyName(string assemblyName)
	{
	}

	[Token(Token = "0x60025EC")]
	[Address(RVA = "0x4EF6B10", Offset = "0x4EF6B10", VA = "0x4EF6B10")]
	internal AssemblyName(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x60025F6")]
	[Address(RVA = "0x4EF7620", Offset = "0x4EF7620", VA = "0x4EF7620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60025F7")]
	[Address(RVA = "0x4EF7640", Offset = "0x4EF7640", VA = "0x4EF7640")]
	public byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x60025F8")]
	[Address(RVA = "0x4EF7650", Offset = "0x4EF7650", VA = "0x4EF7650")]
	public byte[] GetPublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x60025FA")]
	[Address(RVA = "0x4EF7420", Offset = "0x4EF7420", VA = "0x4EF7420")]
	private byte[] InternalGetPublicKeyToken()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025FB")]
	[Address(RVA = "0x4EF79B0", Offset = "0x4EF79B0", VA = "0x4EF79B0")]
	private unsafe static extern void get_public_token(byte* token, byte* pubkey, int len);

	[Token(Token = "0x60025FC")]
	[Address(RVA = "0x4EF7910", Offset = "0x4EF7910", VA = "0x4EF7910")]
	private byte[] ComputePublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x60025FD")]
	[Address(RVA = "0x4EF61B0", Offset = "0x4EF61B0", VA = "0x4EF61B0")]
	public void SetPublicKey(byte[] publicKey)
	{
	}

	[Token(Token = "0x60025FE")]
	[Address(RVA = "0x4EF79C0", Offset = "0x4EF79C0", VA = "0x4EF79C0", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025FF")]
	[Address(RVA = "0x4EF7CA0", Offset = "0x4EF7CA0", VA = "0x4EF7CA0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002600")]
	[Address(RVA = "0x4EF7DA0", Offset = "0x4EF7DA0", VA = "0x4EF7DA0", Slot = "6")]
	public void OnDeserialization(object sender)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002602")]
	[Address(RVA = "0x4EF7E10", Offset = "0x4EF7E10", VA = "0x4EF7E10")]
	private unsafe static extern Mono.MonoAssemblyName* GetNativeName(IntPtr assembly_ptr);

	[Token(Token = "0x6002603")]
	[Address(RVA = "0x4EF66F0", Offset = "0x4EF66F0", VA = "0x4EF66F0")]
	internal unsafe void FillName(Mono.MonoAssemblyName* native, string codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef)
	{
	}

	[Token(Token = "0x6002604")]
	[Address(RVA = "0x4EF7E20", Offset = "0x4EF7E20", VA = "0x4EF7E20")]
	internal static AssemblyName Create(Assembly assembly, bool fillCodebase)
	{
		return null;
	}
}
