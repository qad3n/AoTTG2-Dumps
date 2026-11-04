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
[Token(Token = "0x200053B")]
[ComDefaultInterface(typeof(_AssemblyName))]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
public sealed class AssemblyName : ICloneable, ISerializable, IDeserializationCallback, _AssemblyName
{
	[Token(Token = "0x40014FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x40014FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string codebase;

	[Token(Token = "0x4001500")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int major;

	[Token(Token = "0x4001501")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int minor;

	[Token(Token = "0x4001502")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int build;

	[Token(Token = "0x4001503")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int revision;

	[Token(Token = "0x4001504")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CultureInfo cultureinfo;

	[Token(Token = "0x4001505")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AssemblyNameFlags flags;

	[Token(Token = "0x4001506")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private AssemblyHashAlgorithm hashalg;

	[Token(Token = "0x4001507")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private StrongNameKeyPair keypair;

	[Token(Token = "0x4001508")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private byte[] publicKey;

	[Token(Token = "0x4001509")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] keyToken;

	[Token(Token = "0x400150A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AssemblyVersionCompatibility versioncompat;

	[Token(Token = "0x400150B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Version version;

	[Token(Token = "0x400150C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private ProcessorArchitecture processor_architecture;

	[Token(Token = "0x400150D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private AssemblyContentType contentType;

	[Token(Token = "0x17000545")]
	public string Name
	{
		[Token(Token = "0x6002670")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002671")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000546")]
	public CultureInfo CultureInfo
	{
		[Token(Token = "0x6002672")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002673")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	public AssemblyNameFlags Flags
	{
		[Token(Token = "0x6002674")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(AssemblyNameFlags);
		}
		[Token(Token = "0x6002675")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		set
		{
		}
	}

	[Token(Token = "0x17000548")]
	public string FullName
	{
		[Token(Token = "0x6002676")]
		[Address(RVA = "0x1A40010", Offset = "0x1A3E610", VA = "0x181A40010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000549")]
	public Version Version
	{
		[Token(Token = "0x6002677")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002678")]
		[Address(RVA = "0x1A404A0", Offset = "0x1A3EAA0", VA = "0x181A404A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700054A")]
	private bool IsPublicKeyValid
	{
		[Token(Token = "0x600267C")]
		[Address(RVA = "0x1A403F0", Offset = "0x1A3E9F0", VA = "0x181A403F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054B")]
	public string CultureName
	{
		[Token(Token = "0x6002684")]
		[Address(RVA = "0x1A3FFF0", Offset = "0x1A3E5F0", VA = "0x181A3FFF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600266C")]
	[Address(RVA = "0x1A3FA40", Offset = "0x1A3E040", VA = "0x181A3FA40")]
	public AssemblyName()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600266D")]
	[Address(RVA = "0x1A3F780", Offset = "0x1A3DD80", VA = "0x181A3F780")]
	private static extern bool ParseAssemblyName(IntPtr name, out Mono.MonoAssemblyName aname, out bool is_version_definited, out bool is_token_defined);

	[Token(Token = "0x600266E")]
	[Address(RVA = "0x1A3F7F0", Offset = "0x1A3DDF0", VA = "0x181A3F7F0")]
	public AssemblyName(string assemblyName)
	{
	}

	[Token(Token = "0x600266F")]
	[Address(RVA = "0x1A3FA60", Offset = "0x1A3E060", VA = "0x181A3FA60")]
	internal AssemblyName(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6002679")]
	[Address(RVA = "0x1A3F7C0", Offset = "0x1A3DDC0", VA = "0x181A3F7C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600267A")]
	[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
	public byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x600267B")]
	[Address(RVA = "0x1A3F520", Offset = "0x1A3DB20", VA = "0x181A3F520")]
	public byte[] GetPublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x600267D")]
	[Address(RVA = "0x1A3F610", Offset = "0x1A3DC10", VA = "0x181A3F610")]
	private byte[] InternalGetPublicKeyToken()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600267E")]
	[Address(RVA = "0x1A40480", Offset = "0x1A3EA80", VA = "0x181A40480")]
	private unsafe static extern void get_public_token(byte* token, byte* pubkey, int len);

	[Token(Token = "0x600267F")]
	[Address(RVA = "0x1A3EDF0", Offset = "0x1A3D3F0", VA = "0x181A3EDF0")]
	private byte[] ComputePublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x6002680")]
	[Address(RVA = "0x1A3F790", Offset = "0x1A3DD90", VA = "0x181A3F790")]
	public void SetPublicKey(byte[] publicKey)
	{
	}

	[Token(Token = "0x6002681")]
	[Address(RVA = "0x1A3F250", Offset = "0x1A3D850", VA = "0x181A3F250", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002682")]
	[Address(RVA = "0x1A3ECF0", Offset = "0x1A3D2F0", VA = "0x181A3ECF0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002683")]
	[Address(RVA = "0x1A3F700", Offset = "0x1A3DD00", VA = "0x181A3F700", Slot = "6")]
	public void OnDeserialization(object sender)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002685")]
	[Address(RVA = "0x1A3F240", Offset = "0x1A3D840", VA = "0x181A3F240")]
	private unsafe static extern Mono.MonoAssemblyName* GetNativeName(IntPtr assembly_ptr);

	[Token(Token = "0x6002686")]
	[Address(RVA = "0x1A3EF80", Offset = "0x1A3D580", VA = "0x181A3EF80")]
	internal unsafe void FillName(Mono.MonoAssemblyName* native, string codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef)
	{
	}

	[Token(Token = "0x6002687")]
	[Address(RVA = "0x1A3EE90", Offset = "0x1A3D490", VA = "0x181A3EE90")]
	internal static AssemblyName Create(Assembly assembly, bool fillCodebase)
	{
		return null;
	}
}
