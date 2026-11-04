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
[Token(Token = "0x2000549")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_Module))]
internal class RuntimeModule : Module
{
	[Token(Token = "0x4001544")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr _impl;

	[Token(Token = "0x4001545")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Assembly assembly;

	[Token(Token = "0x4001546")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string fqname;

	[Token(Token = "0x4001547")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string name;

	[Token(Token = "0x4001548")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string scopename;

	[Token(Token = "0x4001549")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal bool is_resource;

	[Token(Token = "0x400154A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	internal int token;

	[Token(Token = "0x17000583")]
	public override Assembly Assembly
	{
		[Token(Token = "0x600275D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000584")]
	public override string ScopeName
	{
		[Token(Token = "0x600275E")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000585")]
	public override Guid ModuleVersionId
	{
		[Token(Token = "0x600275F")]
		[Address(RVA = "0x1A70690", Offset = "0x1A6EC90", VA = "0x181A70690", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x17000586")]
	public override string FullyQualifiedName
	{
		[Token(Token = "0x6002760")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002761")]
	[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190", Slot = "12")]
	public override bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002762")]
	[Address(RVA = "0x1A70360", Offset = "0x1A6E960", VA = "0x181A70360", Slot = "14")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002763")]
	[Address(RVA = "0x1A702F0", Offset = "0x1A6E8F0", VA = "0x181A702F0", Slot = "15")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002764")]
	[Address(RVA = "0x1A705D0", Offset = "0x1A6EBD0", VA = "0x181A705D0", Slot = "13")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002765")]
	[Address(RVA = "0x1A70450", Offset = "0x1A6EA50", VA = "0x181A70450", Slot = "16")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002766")]
	[Address(RVA = "0x1A70560", Offset = "0x1A6EB60", VA = "0x181A70560")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x6002767")]
	[Address(RVA = "0x1A703D0", Offset = "0x1A6E9D0", VA = "0x181A703D0", Slot = "17")]
	internal override Guid GetModuleVersionId()
	{
		return default(Guid);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002768")]
	[Address(RVA = "0x1A703C0", Offset = "0x1A6E9C0", VA = "0x181A703C0")]
	private static extern void GetGuidInternal(IntPtr module, byte[] guid);

	[Token(Token = "0x6002769")]
	[Address(RVA = "0x1A70640", Offset = "0x1A6EC40", VA = "0x181A70640")]
	public RuntimeModule()
	{
	}
}
