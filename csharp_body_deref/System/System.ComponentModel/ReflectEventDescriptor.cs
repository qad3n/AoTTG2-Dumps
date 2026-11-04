// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ReflectEventDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001D9")]
internal sealed class ReflectEventDescriptor : EventDescriptor
{
	[Token(Token = "0x400073D")]
	[FieldOffset(Offset = "0x60")]
	private Type _type;

	[Token(Token = "0x400073E")]
	[FieldOffset(Offset = "0x68")]
	private readonly Type _componentClass;

	[Token(Token = "0x400073F")]
	[FieldOffset(Offset = "0x70")]
	private MethodInfo _addMethod;

	[Token(Token = "0x4000740")]
	[FieldOffset(Offset = "0x78")]
	private MethodInfo _removeMethod;

	[Token(Token = "0x4000741")]
	[FieldOffset(Offset = "0x80")]
	private EventInfo _realEvent;

	[Token(Token = "0x4000742")]
	[FieldOffset(Offset = "0x88")]
	private bool _filledMethods;

	[Token(Token = "0x1700028E")]
	public override Type ComponentType
	{
		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028F")]
	public override Type EventType
	{
		[Token(Token = "0x6000C98")]
		[Address(RVA = "0x28BB010", Offset = "0x28B9610", VA = "0x1828BB010", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000290")]
	public override bool IsMulticast
	{
		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x28BB030", Offset = "0x28B9630", VA = "0x1828BB030", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x28BAD50", Offset = "0x28B9350", VA = "0x1828BAD50")]
	public ReflectEventDescriptor(Type componentClass, string name, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x28BAC00", Offset = "0x28B9200", VA = "0x1828BAC00")]
	public ReflectEventDescriptor(Type componentClass, EventInfo eventInfo)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x28BAF40", Offset = "0x28B9540", VA = "0x1828BAF40")]
	public ReflectEventDescriptor(Type componentType, EventDescriptor oldReflectEventDescriptor, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x28B9800", Offset = "0x28B7E00", VA = "0x1828B9800", Slot = "20")]
	public override void AddEventHandler(object component, Delegate value)
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x28B9C50", Offset = "0x28B8250", VA = "0x1828B9C50", Slot = "15")]
	protected override void FillAttributes(IList attributes)
	{
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x28B9DB0", Offset = "0x28B83B0", VA = "0x1828B9DB0")]
	private void FillEventInfoAttribute(EventInfo realEventInfo, IList attributes)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x28BA070", Offset = "0x28B8670", VA = "0x1828BA070")]
	private void FillMethods()
	{
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x28BA560", Offset = "0x28B8B60", VA = "0x1828BA560")]
	private void FillSingleMethodAttribute(MethodInfo realMethodInfo, IList attributes)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x28BA870", Offset = "0x28B8E70", VA = "0x1828BA870", Slot = "21")]
	public override void RemoveEventHandler(object component, Delegate value)
	{
	}
}
