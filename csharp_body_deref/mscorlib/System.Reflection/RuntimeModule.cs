// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeModule
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000522")]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_Module))]
[ComVisible(true)]
internal class RuntimeModule : Module
{
	[Token(Token = "0x40014A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr _impl;

	[Token(Token = "0x40014A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Assembly assembly;

	[Token(Token = "0x40014A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string fqname;

	[Token(Token = "0x40014A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string name;

	[Token(Token = "0x40014A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string scopename;

	[Token(Token = "0x40014A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal bool is_resource;

	[Token(Token = "0x40014AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	internal int token;

	[Token(Token = "0x17000582")]
	public override Assembly Assembly
	{
		[Token(Token = "0x600272B")]
		[Address(RVA = "0x53EB910", Offset = "0x53EA910", VA = "0x53EB910", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000583")]
	public override string ScopeName
	{
		[Token(Token = "0x600272C")]
		[Address(RVA = "0x53EB920", Offset = "0x53EA920", VA = "0x53EB920", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000584")]
	public override Guid ModuleVersionId
	{
		[Token(Token = "0x600272D")]
		[Address(RVA = "0x53EB930", Offset = "0x53EA930", VA = "0x53EB930", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x17000585")]
	public override string FullyQualifiedName
	{
		[Token(Token = "0x600272E")]
		[Address(RVA = "0x53EB950", Offset = "0x53EA950", VA = "0x53EB950", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600272F")]
	[Address(RVA = "0x53EB960", Offset = "0x53EA960", VA = "0x53EB960", Slot = "12")]
	public override bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002730")]
	[Address(RVA = "0x53EB970", Offset = "0x53EA970", VA = "0x53EB970", Slot = "14")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002731")]
	[Address(RVA = "0x53EB9C0", Offset = "0x53EA9C0", VA = "0x53EB9C0", Slot = "15")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002732")]
	[Address(RVA = "0x53EBA20", Offset = "0x53EAA20", VA = "0x53EBA20", Slot = "13")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002733")]
	[Address(RVA = "0x53EBA80", Offset = "0x53EAA80", VA = "0x53EBA80", Slot = "16")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002734")]
	[Address(RVA = "0x53EBB60", Offset = "0x53EAB60", VA = "0x53EBB60")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x6002735")]
	[Address(RVA = "0x53EBBC0", Offset = "0x53EABC0", VA = "0x53EBBC0", Slot = "17")]
	internal override Guid GetModuleVersionId()
	{
		return default(Guid);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002736")]
	[Address(RVA = "0x53EBC30", Offset = "0x53EAC30", VA = "0x53EBC30")]
	private static extern void GetGuidInternal(IntPtr module, byte[] guid);

	[Token(Token = "0x6002737")]
	[Address(RVA = "0x53EBC40", Offset = "0x53EAC40", VA = "0x53EBC40")]
	public RuntimeModule()
	{
	}
}
