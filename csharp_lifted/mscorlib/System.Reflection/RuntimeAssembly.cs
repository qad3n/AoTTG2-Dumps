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
[Token(Token = "0x2000519")]
[ComDefaultInterface(typeof(_Assembly))]
[ClassInterface(ClassInterfaceType.None)]
[ComVisible(true)]
internal class RuntimeAssembly : Assembly
{
	[Token(Token = "0x200051A")]
	internal class UnmanagedMemoryStreamForModule : UnmanagedMemoryStream
	{
		[Token(Token = "0x4001489")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private Module module;

		[Token(Token = "0x600268E")]
		[Address(RVA = "0x53E6D50", Offset = "0x53E5D50", VA = "0x53E6D50")]
		public unsafe UnmanagedMemoryStreamForModule(byte* pointer, long length, Module module)
		{
		}

		[Token(Token = "0x600268F")]
		[Address(RVA = "0x53E6F90", Offset = "0x53E5F90", VA = "0x53E6F90", Slot = "20")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x400147F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr _mono_assembly;

	[Token(Token = "0x4001480")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object _evidence;

	[Token(Token = "0x4001481")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal ResolveEventHolder resolve_event_holder;

	[Token(Token = "0x4001482")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _minimum;

	[Token(Token = "0x4001483")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object _optional;

	[Token(Token = "0x4001484")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _refuse;

	[Token(Token = "0x4001485")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object _granted;

	[Token(Token = "0x4001486")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object _denied;

	[Token(Token = "0x4001487")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal bool fromByteArray;

	[Token(Token = "0x4001488")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string assemblyName;

	[Token(Token = "0x1700054F")]
	[ComVisible(false)]
	public override extern bool ReflectionOnly
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600267B")]
		[Address(RVA = "0x53E67D0", Offset = "0x53E57D0", VA = "0x53E67D0", Slot = "28")]
		get;
	}

	[Token(Token = "0x17000550")]
	public override string CodeBase
	{
		[Token(Token = "0x600267D")]
		[Address(RVA = "0x53E67F0", Offset = "0x53E57F0", VA = "0x53E67F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000551")]
	public override string EscapedCodeBase
	{
		[Token(Token = "0x600267E")]
		[Address(RVA = "0x53E6800", Offset = "0x53E5800", VA = "0x53E6800", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000552")]
	public override string FullName
	{
		[Token(Token = "0x600267F")]
		[Address(RVA = "0x53E6810", Offset = "0x53E5810", VA = "0x53E6810", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000553")]
	internal override IntPtr MonoAssembly
	{
		[Token(Token = "0x6002680")]
		[Address(RVA = "0x53E6820", Offset = "0x53E5820", VA = "0x53E6820", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000554")]
	public override string Location
	{
		[Token(Token = "0x6002681")]
		[Address(RVA = "0x53E6830", Offset = "0x53E5830", VA = "0x53E6830", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600266E")]
	[Address(RVA = "0x53E61A0", Offset = "0x53E51A0", VA = "0x53E61A0")]
	protected RuntimeAssembly()
	{
	}

	[Token(Token = "0x600266F")]
	[Address(RVA = "0x53E6210", Offset = "0x53E5210", VA = "0x53E6210", Slot = "13")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002670")]
	[Address(RVA = "0x53E62A0", Offset = "0x53E52A0", VA = "0x53E62A0")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(string partialName, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002671")]
	[Address(RVA = "0x53E6350", Offset = "0x53E5350", VA = "0x53E6350")]
	internal static System.Reflection.RuntimeAssembly LoadWithPartialNameInternal(AssemblyName an, Evidence securityEvidence, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002672")]
	[Address(RVA = "0x53E6380", Offset = "0x53E5380", VA = "0x53E6380", Slot = "22")]
	public override AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x6002673")]
	[Address(RVA = "0x53E6390", Offset = "0x53E5390", VA = "0x53E6390", Slot = "29")]
	public override Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002674")]
	[Address(RVA = "0x53E6440", Offset = "0x53E5440", VA = "0x53E6440", Slot = "30")]
	public override Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x6002675")]
	[Address(RVA = "0x53E6570", Offset = "0x53E5570", VA = "0x53E6570", Slot = "31")]
	public override Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x6002676")]
	[Address(RVA = "0x53E6740", Offset = "0x53E5740", VA = "0x53E6740")]
	internal static byte[] GetAotId()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002677")]
	[Address(RVA = "0x53E67A0", Offset = "0x53E57A0", VA = "0x53E67A0")]
	private static extern string get_code_base(Assembly a, bool escaped);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002678")]
	[Address(RVA = "0x53E67B0", Offset = "0x53E57B0", VA = "0x53E67B0")]
	private extern string get_location();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002679")]
	[Address(RVA = "0x53E67C0", Offset = "0x53E57C0", VA = "0x53E67C0")]
	internal static extern string get_fullname(Assembly a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600267A")]
	[Address(RVA = "0x53E6790", Offset = "0x53E5790", VA = "0x53E6790")]
	internal static extern bool GetAotIdInternal(byte[] aotid);

	[Token(Token = "0x600267C")]
	[Address(RVA = "0x53E67E0", Offset = "0x53E57E0", VA = "0x53E67E0")]
	internal static string GetCodeBase(Assembly a, bool escaped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002682")]
	[Address(RVA = "0x53E6860", Offset = "0x53E5860", VA = "0x53E6860")]
	private extern bool GetManifestResourceInfoInternal(string name, ManifestResourceInfo info);

	[Token(Token = "0x6002683")]
	[Address(RVA = "0x53E6870", Offset = "0x53E5870", VA = "0x53E6870", Slot = "27")]
	public override ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002684")]
	[Address(RVA = "0x53E69A0", Offset = "0x53E59A0", VA = "0x53E69A0", Slot = "26")]
	public override extern string[] GetManifestResourceNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002685")]
	[Address(RVA = "0x53E69B0", Offset = "0x53E59B0", VA = "0x53E69B0")]
	internal extern IntPtr GetManifestResourceInternal(string name, out int size, out Module module);

	[Token(Token = "0x6002686")]
	[Address(RVA = "0x53E69C0", Offset = "0x53E59C0", VA = "0x53E69C0", Slot = "17")]
	public override Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x6002687")]
	[Address(RVA = "0x53E6D80", Offset = "0x53E5D80", VA = "0x53E6D80", Slot = "14")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002688")]
	[Address(RVA = "0x53E6DE0", Offset = "0x53E5DE0", VA = "0x53E6DE0", Slot = "15")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002689")]
	[Address(RVA = "0x53E6E30", Offset = "0x53E5E30", VA = "0x53E6E30", Slot = "16")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600268A")]
	[Address(RVA = "0x53E6E90", Offset = "0x53E5E90", VA = "0x53E6E90", Slot = "25")]
	internal override extern Module[] GetModulesInternal();

	[Token(Token = "0x600268B")]
	[Address(RVA = "0x53E6EA0", Offset = "0x53E5EA0", VA = "0x53E6EA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600268C")]
	[Address(RVA = "0x53E6EB0", Offset = "0x53E5EB0", VA = "0x53E6EB0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600268D")]
	[Address(RVA = "0x53E6F40", Offset = "0x53E5F40", VA = "0x53E6F40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
