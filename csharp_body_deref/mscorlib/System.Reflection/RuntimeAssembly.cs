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
		[Address(RVA = "0x4EFA620", Offset = "0x4EFA620", VA = "0x4EFA620")]
		public unsafe UnmanagedMemoryStreamForModule(byte* pointer, long length, Module module)
		{
		}

		[Token(Token = "0x600263E")]
		[Address(RVA = "0x4EFA860", Offset = "0x4EFA860", VA = "0x4EFA860", Slot = "19")]
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
		[Address(RVA = "0x4EFA0C0", Offset = "0x4EFA0C0", VA = "0x4EFA0C0", Slot = "28")]
		get;
	}

	[Token(Token = "0x1700054E")]
	public override string CodeBase
	{
		[Token(Token = "0x600262C")]
		[Address(RVA = "0x4EFA0E0", Offset = "0x4EFA0E0", VA = "0x4EFA0E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054F")]
	public override string EscapedCodeBase
	{
		[Token(Token = "0x600262D")]
		[Address(RVA = "0x4EFA0F0", Offset = "0x4EFA0F0", VA = "0x4EFA0F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000550")]
	public override string FullName
	{
		[Token(Token = "0x600262E")]
		[Address(RVA = "0x4EFA100", Offset = "0x4EFA100", VA = "0x4EFA100", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000551")]
	internal override IntPtr MonoAssembly
	{
		[Token(Token = "0x600262F")]
		[Address(RVA = "0x4EFA110", Offset = "0x4EFA110", VA = "0x4EFA110", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000552")]
	public override string Location
	{
		[Token(Token = "0x6002630")]
		[Address(RVA = "0x4EFA120", Offset = "0x4EFA120", VA = "0x4EFA120", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600261D")]
	[Address(RVA = "0x4EF9A90", Offset = "0x4EF9A90", VA = "0x4EF9A90")]
	protected RuntimeAssembly()
	{
	}

	[Token(Token = "0x600261E")]
	[Address(RVA = "0x4EF9B00", Offset = "0x4EF9B00", VA = "0x4EF9B00", Slot = "13")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600261F")]
	[Address(RVA = "0x4EF9B90", Offset = "0x4EF9B90", VA = "0x4EF9B90")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(string partialName, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002620")]
	[Address(RVA = "0x4EF9C40", Offset = "0x4EF9C40", VA = "0x4EF9C40")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(AssemblyName an, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002621")]
	[Address(RVA = "0x4EF9C70", Offset = "0x4EF9C70", VA = "0x4EF9C70", Slot = "22")]
	public override AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x6002622")]
	[Address(RVA = "0x4EF9C80", Offset = "0x4EF9C80", VA = "0x4EF9C80", Slot = "29")]
	public override Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002623")]
	[Address(RVA = "0x4EF9D30", Offset = "0x4EF9D30", VA = "0x4EF9D30", Slot = "30")]
	public override Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x6002624")]
	[Address(RVA = "0x4EF9E50", Offset = "0x4EF9E50", VA = "0x4EF9E50", Slot = "31")]
	public override Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x6002625")]
	[Address(RVA = "0x4EFA030", Offset = "0x4EFA030", VA = "0x4EFA030")]
	internal static byte[] GetAotId()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002626")]
	[Address(RVA = "0x4EFA090", Offset = "0x4EFA090", VA = "0x4EFA090")]
	private static extern string get_code_base(Assembly a, bool escaped);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002627")]
	[Address(RVA = "0x4EFA0A0", Offset = "0x4EFA0A0", VA = "0x4EFA0A0")]
	private extern string get_location();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002628")]
	[Address(RVA = "0x4EFA0B0", Offset = "0x4EFA0B0", VA = "0x4EFA0B0")]
	internal static extern string get_fullname(Assembly a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002629")]
	[Address(RVA = "0x4EFA080", Offset = "0x4EFA080", VA = "0x4EFA080")]
	internal static extern bool GetAotIdInternal(byte[] aotid);

	[Token(Token = "0x600262B")]
	[Address(RVA = "0x4EFA0D0", Offset = "0x4EFA0D0", VA = "0x4EFA0D0")]
	internal static string GetCodeBase(Assembly a, bool escaped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002631")]
	[Address(RVA = "0x4EFA150", Offset = "0x4EFA150", VA = "0x4EFA150")]
	private extern bool GetManifestResourceInfoInternal(string name, ManifestResourceInfo info);

	[Token(Token = "0x6002632")]
	[Address(RVA = "0x4EFA160", Offset = "0x4EFA160", VA = "0x4EFA160", Slot = "27")]
	public override ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002633")]
	[Address(RVA = "0x4EFA290", Offset = "0x4EFA290", VA = "0x4EFA290", Slot = "26")]
	public override extern string[] GetManifestResourceNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002634")]
	[Address(RVA = "0x4EFA2A0", Offset = "0x4EFA2A0", VA = "0x4EFA2A0")]
	internal extern IntPtr GetManifestResourceInternal(string name, out int size, out Module module);

	[Token(Token = "0x6002635")]
	[Address(RVA = "0x4EFA2B0", Offset = "0x4EFA2B0", VA = "0x4EFA2B0", Slot = "17")]
	public override Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x6002636")]
	[Address(RVA = "0x4EFA650", Offset = "0x4EFA650", VA = "0x4EFA650", Slot = "14")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002637")]
	[Address(RVA = "0x4EFA6B0", Offset = "0x4EFA6B0", VA = "0x4EFA6B0", Slot = "15")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002638")]
	[Address(RVA = "0x4EFA700", Offset = "0x4EFA700", VA = "0x4EFA700", Slot = "16")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002639")]
	[Address(RVA = "0x4EFA760", Offset = "0x4EFA760", VA = "0x4EFA760", Slot = "25")]
	internal override extern Module[] GetModulesInternal();

	[Token(Token = "0x600263A")]
	[Address(RVA = "0x4EFA770", Offset = "0x4EFA770", VA = "0x4EFA770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600263B")]
	[Address(RVA = "0x4EFA780", Offset = "0x4EFA780", VA = "0x4EFA780", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600263C")]
	[Address(RVA = "0x4EFA810", Offset = "0x4EFA810", VA = "0x4EFA810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
