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
[Token(Token = "0x2000510")]
[ComVisible(true)]
[ComDefaultInterface(typeof(_Assembly))]
[ClassInterface(ClassInterfaceType.None)]
internal class RuntimeAssembly : Assembly
{
	[Token(Token = "0x2000511")]
	internal class UnmanagedMemoryStreamForModule : UnmanagedMemoryStream
	{
		[Token(Token = "0x400152A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private Module module;

		[Token(Token = "0x600263D")]
		[Address(RVA = "0x3BE0140", Offset = "0x3BE0140", VA = "0x3BE0140")]
		public unsafe UnmanagedMemoryStreamForModule(byte* pointer, long length, Module module)
		{
		}

		[Token(Token = "0x600263E")]
		[Address(RVA = "0x3BE0380", Offset = "0x3BE0380", VA = "0x3BE0380", Slot = "19")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x4001520")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr _mono_assembly;

	[Token(Token = "0x4001521")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object _evidence;

	[Token(Token = "0x4001522")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal ResolveEventHolder resolve_event_holder;

	[Token(Token = "0x4001523")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _minimum;

	[Token(Token = "0x4001524")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object _optional;

	[Token(Token = "0x4001525")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _refuse;

	[Token(Token = "0x4001526")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object _granted;

	[Token(Token = "0x4001527")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object _denied;

	[Token(Token = "0x4001528")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal bool fromByteArray;

	[Token(Token = "0x4001529")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string assemblyName;

	[Token(Token = "0x1700054D")]
	[ComVisible(false)]
	public override extern bool ReflectionOnly
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600262A")]
		[Address(RVA = "0x3BDFBE0", Offset = "0x3BDFBE0", VA = "0x3BDFBE0", Slot = "28")]
		get;
	}

	[Token(Token = "0x1700054E")]
	public override string CodeBase
	{
		[Token(Token = "0x600262C")]
		[Address(RVA = "0x3BDFC00", Offset = "0x3BDFC00", VA = "0x3BDFC00", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054F")]
	public override string EscapedCodeBase
	{
		[Token(Token = "0x600262D")]
		[Address(RVA = "0x3BDFC10", Offset = "0x3BDFC10", VA = "0x3BDFC10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000550")]
	public override string FullName
	{
		[Token(Token = "0x600262E")]
		[Address(RVA = "0x3BDFC20", Offset = "0x3BDFC20", VA = "0x3BDFC20", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000551")]
	internal override IntPtr MonoAssembly
	{
		[Token(Token = "0x600262F")]
		[Address(RVA = "0x3BDFC30", Offset = "0x3BDFC30", VA = "0x3BDFC30", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000552")]
	public override string Location
	{
		[Token(Token = "0x6002630")]
		[Address(RVA = "0x3BDFC40", Offset = "0x3BDFC40", VA = "0x3BDFC40", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600261D")]
	[Address(RVA = "0x3BDF5B0", Offset = "0x3BDF5B0", VA = "0x3BDF5B0")]
	protected RuntimeAssembly()
	{
	}

	[Token(Token = "0x600261E")]
	[Address(RVA = "0x3BDF620", Offset = "0x3BDF620", VA = "0x3BDF620", Slot = "13")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600261F")]
	[Address(RVA = "0x3BDF6B0", Offset = "0x3BDF6B0", VA = "0x3BDF6B0")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(string partialName, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002620")]
	[Address(RVA = "0x3BDF760", Offset = "0x3BDF760", VA = "0x3BDF760")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(AssemblyName an, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002621")]
	[Address(RVA = "0x3BDF790", Offset = "0x3BDF790", VA = "0x3BDF790", Slot = "22")]
	public override AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x6002622")]
	[Address(RVA = "0x3BDF7A0", Offset = "0x3BDF7A0", VA = "0x3BDF7A0", Slot = "29")]
	public override Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002623")]
	[Address(RVA = "0x3BDF850", Offset = "0x3BDF850", VA = "0x3BDF850", Slot = "30")]
	public override Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x6002624")]
	[Address(RVA = "0x3BDF970", Offset = "0x3BDF970", VA = "0x3BDF970", Slot = "31")]
	public override Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x6002625")]
	[Address(RVA = "0x3BDFB50", Offset = "0x3BDFB50", VA = "0x3BDFB50")]
	internal static byte[] GetAotId()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002626")]
	[Address(RVA = "0x3BDFBB0", Offset = "0x3BDFBB0", VA = "0x3BDFBB0")]
	private static extern string get_code_base(Assembly a, bool escaped);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002627")]
	[Address(RVA = "0x3BDFBC0", Offset = "0x3BDFBC0", VA = "0x3BDFBC0")]
	private extern string get_location();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002628")]
	[Address(RVA = "0x3BDFBD0", Offset = "0x3BDFBD0", VA = "0x3BDFBD0")]
	internal static extern string get_fullname(Assembly a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002629")]
	[Address(RVA = "0x3BDFBA0", Offset = "0x3BDFBA0", VA = "0x3BDFBA0")]
	internal static extern bool GetAotIdInternal(byte[] aotid);

	[Token(Token = "0x600262B")]
	[Address(RVA = "0x3BDFBF0", Offset = "0x3BDFBF0", VA = "0x3BDFBF0")]
	internal static string GetCodeBase(Assembly a, bool escaped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002631")]
	[Address(RVA = "0x3BDFC70", Offset = "0x3BDFC70", VA = "0x3BDFC70")]
	private extern bool GetManifestResourceInfoInternal(string name, ManifestResourceInfo info);

	[Token(Token = "0x6002632")]
	[Address(RVA = "0x3BDFC80", Offset = "0x3BDFC80", VA = "0x3BDFC80", Slot = "27")]
	public override ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002633")]
	[Address(RVA = "0x3BDFDB0", Offset = "0x3BDFDB0", VA = "0x3BDFDB0", Slot = "26")]
	public override extern string[] GetManifestResourceNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002634")]
	[Address(RVA = "0x3BDFDC0", Offset = "0x3BDFDC0", VA = "0x3BDFDC0")]
	internal extern IntPtr GetManifestResourceInternal(string name, out int size, out Module module);

	[Token(Token = "0x6002635")]
	[Address(RVA = "0x3BDFDD0", Offset = "0x3BDFDD0", VA = "0x3BDFDD0", Slot = "17")]
	public override Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x6002636")]
	[Address(RVA = "0x3BE0170", Offset = "0x3BE0170", VA = "0x3BE0170", Slot = "14")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002637")]
	[Address(RVA = "0x3BE01D0", Offset = "0x3BE01D0", VA = "0x3BE01D0", Slot = "15")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002638")]
	[Address(RVA = "0x3BE0220", Offset = "0x3BE0220", VA = "0x3BE0220", Slot = "16")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002639")]
	[Address(RVA = "0x3BE0280", Offset = "0x3BE0280", VA = "0x3BE0280", Slot = "25")]
	internal override extern Module[] GetModulesInternal();

	[Token(Token = "0x600263A")]
	[Address(RVA = "0x3BE0290", Offset = "0x3BE0290", VA = "0x3BE0290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600263B")]
	[Address(RVA = "0x3BE02A0", Offset = "0x3BE02A0", VA = "0x3BE02A0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600263C")]
	[Address(RVA = "0x3BE0330", Offset = "0x3BE0330", VA = "0x3BE0330", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
