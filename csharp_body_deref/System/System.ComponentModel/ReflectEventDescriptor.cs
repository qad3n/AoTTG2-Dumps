using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002CE")]
internal sealed class ReflectEventDescriptor : EventDescriptor
{
	[Token(Token = "0x4000E06")]
	[FieldOffset(Offset = "0x60")]
	private Type _type;

	[Token(Token = "0x4000E07")]
	[FieldOffset(Offset = "0x68")]
	private readonly Type _componentClass;

	[Token(Token = "0x4000E08")]
	[FieldOffset(Offset = "0x70")]
	private MethodInfo _addMethod;

	[Token(Token = "0x4000E09")]
	[FieldOffset(Offset = "0x78")]
	private MethodInfo _removeMethod;

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x80")]
	private EventInfo _realEvent;

	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x88")]
	private bool _filledMethods;

	[Token(Token = "0x1700041F")]
	public override Type ComponentType
	{
		[Token(Token = "0x600124F")]
		[Address(RVA = "0x4582530", Offset = "0x4582530", VA = "0x4582530", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000420")]
	public override Type EventType
	{
		[Token(Token = "0x6001250")]
		[Address(RVA = "0x4582540", Offset = "0x4582540", VA = "0x4582540", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000421")]
	public override bool IsMulticast
	{
		[Token(Token = "0x6001251")]
		[Address(RVA = "0x4582B60", Offset = "0x4582B60", VA = "0x4582B60", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x45820F0", Offset = "0x45820F0", VA = "0x45820F0")]
	public ReflectEventDescriptor(Type componentClass, string name, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x4582290", Offset = "0x4582290", VA = "0x4582290")]
	public ReflectEventDescriptor(Type componentClass, EventInfo eventInfo)
	{
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x4582460", Offset = "0x4582460", VA = "0x4582460")]
	public ReflectEventDescriptor(Type componentType, EventDescriptor oldReflectEventDescriptor, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x4582C00", Offset = "0x4582C00", VA = "0x4582C00", Slot = "20")]
	public override void AddEventHandler(object component, Delegate value)
	{
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x45834C0", Offset = "0x45834C0", VA = "0x45834C0", Slot = "15")]
	protected override void FillAttributes(IList attributes)
	{
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x4583520", Offset = "0x4583520", VA = "0x4583520")]
	private void FillEventInfoAttribute(EventInfo realEventInfo, IList attributes)
	{
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x4582550", Offset = "0x4582550", VA = "0x4582550")]
	private void FillMethods()
	{
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x4583960", Offset = "0x4583960", VA = "0x4583960")]
	private void FillSingleMethodAttribute(MethodInfo realMethodInfo, IList attributes)
	{
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x4584390", Offset = "0x4584390", VA = "0x4584390", Slot = "21")]
	public override void RemoveEventHandler(object component, Delegate value)
	{
	}
}
