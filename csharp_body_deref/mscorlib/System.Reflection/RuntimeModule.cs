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
		[Address(RVA = "0x4EFF170", Offset = "0x4EFF170", VA = "0x4EFF170", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000581")]
	public override string ScopeName
	{
		[Token(Token = "0x60026DB")]
		[Address(RVA = "0x4EFF180", Offset = "0x4EFF180", VA = "0x4EFF180", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000582")]
	public override Guid ModuleVersionId
	{
		[Token(Token = "0x60026DC")]
		[Address(RVA = "0x4EFF190", Offset = "0x4EFF190", VA = "0x4EFF190", Slot = "10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x17000583")]
	public override string FullyQualifiedName
	{
		[Token(Token = "0x60026DD")]
		[Address(RVA = "0x4EFF1B0", Offset = "0x4EFF1B0", VA = "0x4EFF1B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026DE")]
	[Address(RVA = "0x4EFF1C0", Offset = "0x4EFF1C0", VA = "0x4EFF1C0", Slot = "12")]
	public override bool IsResource()
	{
		return default(bool);
	}

	[Token(Token = "0x60026DF")]
	[Address(RVA = "0x4EFF1D0", Offset = "0x4EFF1D0", VA = "0x4EFF1D0", Slot = "14")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026E0")]
	[Address(RVA = "0x4EFF220", Offset = "0x4EFF220", VA = "0x4EFF220", Slot = "15")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026E1")]
	[Address(RVA = "0x4EFF280", Offset = "0x4EFF280", VA = "0x4EFF280", Slot = "13")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026E2")]
	[Address(RVA = "0x4EFF2E0", Offset = "0x4EFF2E0", VA = "0x4EFF2E0", Slot = "16")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026E3")]
	[Address(RVA = "0x4EFF3C0", Offset = "0x4EFF3C0", VA = "0x4EFF3C0")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x60026E4")]
	[Address(RVA = "0x4EFF420", Offset = "0x4EFF420", VA = "0x4EFF420", Slot = "17")]
	internal override Guid GetModuleVersionId()
	{
		return default(Guid);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E5")]
	[Address(RVA = "0x4EFF490", Offset = "0x4EFF490", VA = "0x4EFF490")]
	private static extern void GetGuidInternal(IntPtr module, byte[] guid);

	[Token(Token = "0x60026E6")]
	[Address(RVA = "0x4EFF4A0", Offset = "0x4EFF4A0", VA = "0x4EFF4A0")]
	public RuntimeModule()
	{
	}
}
