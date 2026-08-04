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
[Token(Token = "0x2000519")]
[ComDefaultInterface(typeof(_Module))]
[ClassInterface(ClassInterfaceType.None)]
[ComVisible(true)]
internal class RuntimeModule : Module
{
	[Token(Token = "0x4001545")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr _impl;

	[Token(Token = "0x4001546")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Assembly assembly;

	[Token(Token = "0x4001547")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string fqname;

	[Token(Token = "0x4001548")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string name;

	[Token(Token = "0x4001549")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string scopename;

	[Token(Token = "0x400154A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal bool is_resource;

	[Token(Token = "0x400154B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	internal int token;

	[Token(Token = "0x17000580")]
	public override Assembly Assembly
	{
		[Token(Token = "0x60026DA")]
		[Address(RVA = "0x3BE4C90", Offset = "0x3BE4C90", VA = "0x3BE4C90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000581")]
	public override string ScopeName
	{
		[Token(Token = "0x60026DB")]
		[Address(RVA = "0x3BE4CA0", Offset = "0x3BE4CA0", VA = "0x3BE4CA0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000582")]
	public override Guid ModuleVersionId
	{
		[Token(Token = "0x60026DC")]
		[Address(RVA = "0x3BE4CB0", Offset = "0x3BE4CB0", VA = "0x3BE4CB0", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x17000583")]
	public override string FullyQualifiedName
	{
		[Token(Token = "0x60026DD")]
		[Address(RVA = "0x3BE4CD0", Offset = "0x3BE4CD0", VA = "0x3BE4CD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026DE")]
	[Address(RVA = "0x3BE4CE0", Offset = "0x3BE4CE0", VA = "0x3BE4CE0", Slot = "12")]
	public override bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x60026DF")]
	[Address(RVA = "0x3BE4CF0", Offset = "0x3BE4CF0", VA = "0x3BE4CF0", Slot = "14")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026E0")]
	[Address(RVA = "0x3BE4D40", Offset = "0x3BE4D40", VA = "0x3BE4D40", Slot = "15")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026E1")]
	[Address(RVA = "0x3BE4DA0", Offset = "0x3BE4DA0", VA = "0x3BE4DA0", Slot = "13")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026E2")]
	[Address(RVA = "0x3BE4E00", Offset = "0x3BE4E00", VA = "0x3BE4E00", Slot = "16")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026E3")]
	[Address(RVA = "0x3BE4EE0", Offset = "0x3BE4EE0", VA = "0x3BE4EE0")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x60026E4")]
	[Address(RVA = "0x3BE4F40", Offset = "0x3BE4F40", VA = "0x3BE4F40", Slot = "17")]
	internal override Guid GetModuleVersionId()
	{
		return default(Guid);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E5")]
	[Address(RVA = "0x3BE4FB0", Offset = "0x3BE4FB0", VA = "0x3BE4FB0")]
	private static extern void GetGuidInternal(IntPtr module, byte[] guid);

	[Token(Token = "0x60026E6")]
	[Address(RVA = "0x3BE4FC0", Offset = "0x3BE4FC0", VA = "0x3BE4FC0")]
	public RuntimeModule()
	{
	}
}
