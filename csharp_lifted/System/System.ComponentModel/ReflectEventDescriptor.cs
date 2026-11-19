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

[Token(Token = "0x200019A")]
internal sealed class ReflectEventDescriptor : EventDescriptor
{
	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x60")]
	private Type _type;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x68")]
	private readonly Type _componentClass;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x70")]
	private MethodInfo _addMethod;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x78")]
	private MethodInfo _removeMethod;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x80")]
	private EventInfo _realEvent;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x88")]
	private bool _filledMethods;

	[Token(Token = "0x1700025F")]
	public override Type ComponentType
	{
		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x6246D00", Offset = "0x6245D00", VA = "0x6246D00", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000260")]
	public override Type EventType
	{
		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x6246D10", Offset = "0x6245D10", VA = "0x6246D10", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000261")]
	public override bool IsMulticast
	{
		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x6247330", Offset = "0x6246330", VA = "0x6247330", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x62468C0", Offset = "0x62458C0", VA = "0x62468C0")]
	public ReflectEventDescriptor(Type componentClass, string name, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x6246A60", Offset = "0x6245A60", VA = "0x6246A60")]
	public ReflectEventDescriptor(Type componentClass, EventInfo eventInfo)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x6246C30", Offset = "0x6245C30", VA = "0x6246C30")]
	public ReflectEventDescriptor(Type componentType, EventDescriptor oldReflectEventDescriptor, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x62473D0", Offset = "0x62463D0", VA = "0x62473D0", Slot = "20")]
	public override void AddEventHandler(object component, Delegate value)
	{
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x6247CB0", Offset = "0x6246CB0", VA = "0x6247CB0", Slot = "15")]
	protected override void FillAttributes(IList attributes)
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x6247D10", Offset = "0x6246D10", VA = "0x6247D10")]
	private void FillEventInfoAttribute(EventInfo realEventInfo, IList attributes)
	{
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x6246D20", Offset = "0x6245D20", VA = "0x6246D20")]
	private void FillMethods()
	{
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x62480C0", Offset = "0x62470C0", VA = "0x62480C0")]
	private void FillSingleMethodAttribute(MethodInfo realMethodInfo, IList attributes)
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x62489C0", Offset = "0x62479C0", VA = "0x62489C0", Slot = "21")]
	public override void RemoveEventHandler(object component, Delegate value)
	{
	}
}
