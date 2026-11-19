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
[Token(Token = "0x2000514")]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_AssemblyName))]
[ComVisible(true)]
public sealed class AssemblyName : ICloneable, ISerializable, IDeserializationCallback, _AssemblyName
{
	[Token(Token = "0x400145E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x400145F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string codebase;

	[Token(Token = "0x4001460")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int major;

	[Token(Token = "0x4001461")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int minor;

	[Token(Token = "0x4001462")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int build;

	[Token(Token = "0x4001463")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int revision;

	[Token(Token = "0x4001464")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CultureInfo cultureinfo;

	[Token(Token = "0x4001465")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AssemblyNameFlags flags;

	[Token(Token = "0x4001466")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private AssemblyHashAlgorithm hashalg;

	[Token(Token = "0x4001467")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private StrongNameKeyPair keypair;

	[Token(Token = "0x4001468")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private byte[] publicKey;

	[Token(Token = "0x4001469")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] keyToken;

	[Token(Token = "0x400146A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AssemblyVersionCompatibility versioncompat;

	[Token(Token = "0x400146B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Version version;

	[Token(Token = "0x400146C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private ProcessorArchitecture processor_architecture;

	[Token(Token = "0x400146D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private AssemblyContentType contentType;

	[Token(Token = "0x17000544")]
	public string Name
	{
		[Token(Token = "0x600263E")]
		[Address(RVA = "0x53E3780", Offset = "0x53E2780", VA = "0x53E3780")]
		get
		{
			return null;
		}
		[Token(Token = "0x600263F")]
		[Address(RVA = "0x53E3790", Offset = "0x53E2790", VA = "0x53E3790")]
		set
		{
		}
	}

	[Token(Token = "0x17000545")]
	public CultureInfo CultureInfo
	{
		[Token(Token = "0x6002640")]
		[Address(RVA = "0x53E37A0", Offset = "0x53E27A0", VA = "0x53E37A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002641")]
		[Address(RVA = "0x53E37B0", Offset = "0x53E27B0", VA = "0x53E37B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000546")]
	public AssemblyNameFlags Flags
	{
		[Token(Token = "0x6002642")]
		[Address(RVA = "0x53E37C0", Offset = "0x53E27C0", VA = "0x53E37C0")]
		get
		{
			return default(AssemblyNameFlags);
		}
		[Token(Token = "0x6002643")]
		[Address(RVA = "0x53E37D0", Offset = "0x53E27D0", VA = "0x53E37D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	public string FullName
	{
		[Token(Token = "0x6002644")]
		[Address(RVA = "0x53E37E0", Offset = "0x53E27E0", VA = "0x53E37E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000548")]
	public Version Version
	{
		[Token(Token = "0x6002645")]
		[Address(RVA = "0x53E3D20", Offset = "0x53E2D20", VA = "0x53E3D20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002646")]
		[Address(RVA = "0x53E2900", Offset = "0x53E1900", VA = "0x53E2900")]
		set
		{
		}
	}

	[Token(Token = "0x17000549")]
	private bool IsPublicKeyValid
	{
		[Token(Token = "0x600264A")]
		[Address(RVA = "0x53E3F50", Offset = "0x53E2F50", VA = "0x53E3F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054A")]
	public string CultureName
	{
		[Token(Token = "0x6002652")]
		[Address(RVA = "0x53E4520", Offset = "0x53E3520", VA = "0x53E4520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600263A")]
	[Address(RVA = "0x53E28B0", Offset = "0x53E18B0", VA = "0x53E28B0")]
	public AssemblyName()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600263B")]
	[Address(RVA = "0x53E2E00", Offset = "0x53E1E00", VA = "0x53E2E00")]
	private static extern bool ParseAssemblyName(IntPtr name, out Mono.MonoAssemblyName aname, out bool is_version_definited, out bool is_token_defined);

	[Token(Token = "0x600263C")]
	[Address(RVA = "0x53D6290", Offset = "0x53D5290", VA = "0x53D6290")]
	public AssemblyName(string assemblyName)
	{
	}

	[Token(Token = "0x600263D")]
	[Address(RVA = "0x53E3230", Offset = "0x53E2230", VA = "0x53E3230")]
	internal AssemblyName(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6002647")]
	[Address(RVA = "0x53E3D30", Offset = "0x53E2D30", VA = "0x53E3D30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002648")]
	[Address(RVA = "0x53E3D50", Offset = "0x53E2D50", VA = "0x53E3D50")]
	public byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6002649")]
	[Address(RVA = "0x53E3D60", Offset = "0x53E2D60", VA = "0x53E3D60")]
	public byte[] GetPublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x600264B")]
	[Address(RVA = "0x53E3B40", Offset = "0x53E2B40", VA = "0x53E3B40")]
	private byte[] InternalGetPublicKeyToken()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600264C")]
	[Address(RVA = "0x53E40F0", Offset = "0x53E30F0", VA = "0x53E40F0")]
	private unsafe static extern void get_public_token(byte* token, byte* pubkey, int len);

	[Token(Token = "0x600264D")]
	[Address(RVA = "0x53E4060", Offset = "0x53E3060", VA = "0x53E4060")]
	private byte[] ComputePublicKeyToken()
	{
		return null;
	}

	[Token(Token = "0x600264E")]
	[Address(RVA = "0x53E28D0", Offset = "0x53E18D0", VA = "0x53E28D0")]
	public void SetPublicKey(byte[] publicKey)
	{
	}

	[Token(Token = "0x600264F")]
	[Address(RVA = "0x53E4100", Offset = "0x53E3100", VA = "0x53E4100", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002650")]
	[Address(RVA = "0x53E43E0", Offset = "0x53E33E0", VA = "0x53E43E0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002651")]
	[Address(RVA = "0x53E44D0", Offset = "0x53E34D0", VA = "0x53E44D0", Slot = "6")]
	public void OnDeserialization(object sender)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002653")]
	[Address(RVA = "0x53E4540", Offset = "0x53E3540", VA = "0x53E4540")]
	private unsafe static extern Mono.MonoAssemblyName* GetNativeName(IntPtr assembly_ptr);

	[Token(Token = "0x6002654")]
	[Address(RVA = "0x53E2E10", Offset = "0x53E1E10", VA = "0x53E2E10")]
	internal unsafe void FillName(Mono.MonoAssemblyName* native, string codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef)
	{
	}

	[Token(Token = "0x6002655")]
	[Address(RVA = "0x53E4550", Offset = "0x53E3550", VA = "0x53E4550")]
	internal static AssemblyName Create(Assembly assembly, bool fillCodebase)
	{
		return null;
	}
}
