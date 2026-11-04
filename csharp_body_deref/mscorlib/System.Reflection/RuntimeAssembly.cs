// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeAssembly
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Security.Policy;
using System.Threading;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000540")]
[ComVisible(true)]
[ComDefaultInterface(typeof(_Assembly))]
[ClassInterface(ClassInterfaceType.None)]
internal class RuntimeAssembly : Assembly
{
	[Token(Token = "0x2000541")]
	internal class UnmanagedMemoryStreamForModule : UnmanagedMemoryStream
	{
		[Token(Token = "0x4001529")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private Module module;

		[Token(Token = "0x60026C0")]
		[Address(RVA = "0x1A74E30", Offset = "0x1A73430", VA = "0x181A74E30")]
		public unsafe UnmanagedMemoryStreamForModule(byte* pointer, long length, Module module)
		{
		}

		[Token(Token = "0x60026C1")]
		[Address(RVA = "0x1A74DE0", Offset = "0x1A733E0", VA = "0x181A74DE0", Slot = "19")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x400151F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr _mono_assembly;

	[Token(Token = "0x4001520")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object _evidence;

	[Token(Token = "0x4001521")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal ResolveEventHolder resolve_event_holder;

	[Token(Token = "0x4001522")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _minimum;

	[Token(Token = "0x4001523")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object _optional;

	[Token(Token = "0x4001524")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _refuse;

	[Token(Token = "0x4001525")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object _granted;

	[Token(Token = "0x4001526")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object _denied;

	[Token(Token = "0x4001527")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal bool fromByteArray;

	[Token(Token = "0x4001528")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string assemblyName;

	[Token(Token = "0x17000550")]
	[ComVisible(false)]
	public override extern bool ReflectionOnly
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60026AD")]
		[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290", Slot = "28")]
		get;
	}

	[Token(Token = "0x17000551")]
	public override string CodeBase
	{
		[Token(Token = "0x60026AF")]
		[Address(RVA = "0x1A6BFA0", Offset = "0x1A6A5A0", VA = "0x181A6BFA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000552")]
	public override string EscapedCodeBase
	{
		[Token(Token = "0x60026B0")]
		[Address(RVA = "0x1A6BFB0", Offset = "0x1A6A5B0", VA = "0x181A6BFB0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000553")]
	public override string FullName
	{
		[Token(Token = "0x60026B1")]
		[Address(RVA = "0x1A6BFC0", Offset = "0x1A6A5C0", VA = "0x181A6BFC0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000554")]
	internal override IntPtr MonoAssembly
	{
		[Token(Token = "0x60026B2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000555")]
	public override string Location
	{
		[Token(Token = "0x60026B3")]
		[Address(RVA = "0x1A6BFD0", Offset = "0x1A6A5D0", VA = "0x181A6BFD0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026A0")]
	[Address(RVA = "0x1A6BF30", Offset = "0x1A6A530", VA = "0x181A6BF30")]
	protected RuntimeAssembly()
	{
	}

	[Token(Token = "0x60026A1")]
	[Address(RVA = "0x1A6BBB0", Offset = "0x1A6A1B0", VA = "0x181A6BBB0", Slot = "13")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026A2")]
	[Address(RVA = "0x1A6BE50", Offset = "0x1A6A450", VA = "0x181A6BE50")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(string partialName, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60026A3")]
	[Address(RVA = "0x1A6BDA0", Offset = "0x1A6A3A0", VA = "0x181A6BDA0")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(AssemblyName an, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60026A4")]
	[Address(RVA = "0x1A6BBA0", Offset = "0x1A6A1A0", VA = "0x181A6BBA0", Slot = "22")]
	public override AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x60026A5")]
	[Address(RVA = "0x1A6BC50", Offset = "0x1A6A250", VA = "0x181A6BC50", Slot = "29")]
	public override Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60026A6")]
	[Address(RVA = "0x1A6B900", Offset = "0x1A69F00", VA = "0x181A6B900", Slot = "30")]
	public override Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x60026A7")]
	[Address(RVA = "0x1A6BA70", Offset = "0x1A6A070", VA = "0x181A6BA70", Slot = "31")]
	public override Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x60026A8")]
	[Address(RVA = "0x1A6B2A0", Offset = "0x1A698A0", VA = "0x181A6B2A0")]
	internal static byte[] GetAotId()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026A9")]
	[Address(RVA = "0x1A6B2F0", Offset = "0x1A698F0", VA = "0x181A6B2F0")]
	private static extern string get_code_base(Assembly a, bool escaped);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026AA")]
	[Address(RVA = "0x1A6BFF0", Offset = "0x1A6A5F0", VA = "0x181A6BFF0")]
	private extern string get_location();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026AB")]
	[Address(RVA = "0x1A6BFC0", Offset = "0x1A6A5C0", VA = "0x181A6BFC0")]
	internal static extern string get_fullname(Assembly a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026AC")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal static extern bool GetAotIdInternal(byte[] aotid);

	[Token(Token = "0x60026AE")]
	[Address(RVA = "0x1A6B2F0", Offset = "0x1A698F0", VA = "0x181A6B2F0")]
	internal static string GetCodeBase(Assembly a, bool escaped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B4")]
	[Address(RVA = "0x1A6B3D0", Offset = "0x1A699D0", VA = "0x181A6B3D0")]
	private extern bool GetManifestResourceInfoInternal(string name, ManifestResourceInfo info);

	[Token(Token = "0x60026B5")]
	[Address(RVA = "0x1A6B3E0", Offset = "0x1A699E0", VA = "0x181A6B3E0", Slot = "27")]
	public override ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B6")]
	[Address(RVA = "0x1A6B520", Offset = "0x1A69B20", VA = "0x181A6B520", Slot = "26")]
	public override extern string[] GetManifestResourceNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B7")]
	[Address(RVA = "0x1A6B510", Offset = "0x1A69B10", VA = "0x181A6B510")]
	internal extern IntPtr GetManifestResourceInternal(string name, out int size, out Module module);

	[Token(Token = "0x60026B8")]
	[Address(RVA = "0x1A6B530", Offset = "0x1A69B30", VA = "0x181A6B530", Slot = "17")]
	public override Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x60026B9")]
	[Address(RVA = "0x1A6BD30", Offset = "0x1A6A330", VA = "0x181A6BD30", Slot = "14")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026BA")]
	[Address(RVA = "0x1A6B300", Offset = "0x1A69900", VA = "0x181A6B300", Slot = "15")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026BB")]
	[Address(RVA = "0x1A6B360", Offset = "0x1A69960", VA = "0x181A6B360", Slot = "16")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026BC")]
	[Address(RVA = "0x1A6BA60", Offset = "0x1A6A060", VA = "0x181A6BA60", Slot = "25")]
	internal override extern Module[] GetModulesInternal();

	[Token(Token = "0x60026BD")]
	[Address(RVA = "0xC7E720", Offset = "0xC7CD20", VA = "0x180C7E720", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60026BE")]
	[Address(RVA = "0x1A6B1E0", Offset = "0x1A697E0", VA = "0x181A6B1E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60026BF")]
	[Address(RVA = "0x1A6BEE0", Offset = "0x1A6A4E0", VA = "0x181A6BEE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
