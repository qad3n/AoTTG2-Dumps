using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200027F")]
[CompilerGenerated]
internal class CustomLogicListBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000280")]
	public static class Factory
	{
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x3CBC260", Offset = "0x3CBC260", VA = "0x3CBC260")]
		public static CustomLogicListBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000281")]
	public static class Bindings
	{
		[Token(Token = "0x4000D3C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x3CBC2D0", Offset = "0x3CBC2D0", VA = "0x3CBC2D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6000ED1")]
		[Address(RVA = "0x3CBC970", Offset = "0x3CBC970", VA = "0x3CBC970")]
		public static CLPropertyBinding<CustomLogicListBuiltin> __CreatePropertyBinding__Count()
		{
			return null;
		}

		[Token(Token = "0x6000ED2")]
		[Address(RVA = "0x3CBCA10", Offset = "0x3CBCA10", VA = "0x3CBCA10")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Clear()
		{
			return null;
		}

		[Token(Token = "0x6000ED3")]
		[Address(RVA = "0x3CBCB60", Offset = "0x3CBCB60", VA = "0x3CBCB60")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6000ED4")]
		[Address(RVA = "0x3CBCCB0", Offset = "0x3CBCCB0", VA = "0x3CBCCB0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6000ED5")]
		[Address(RVA = "0x3CBCE00", Offset = "0x3CBCE00", VA = "0x3CBCE00")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Add()
		{
			return null;
		}

		[Token(Token = "0x6000ED6")]
		[Address(RVA = "0x3CBCF50", Offset = "0x3CBCF50", VA = "0x3CBCF50")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__InsertAt()
		{
			return null;
		}

		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x3CBD0A0", Offset = "0x3CBD0A0", VA = "0x3CBD0A0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__RemoveAt()
		{
			return null;
		}

		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x3CBD1F0", Offset = "0x3CBD1F0", VA = "0x3CBD1F0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Remove()
		{
			return null;
		}

		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x3CBD340", Offset = "0x3CBD340", VA = "0x3CBD340")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Contains()
		{
			return null;
		}

		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x3CBD490", Offset = "0x3CBD490", VA = "0x3CBD490")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Sort()
		{
			return null;
		}

		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x3CBD5E0", Offset = "0x3CBD5E0", VA = "0x3CBD5E0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__SortCustom()
		{
			return null;
		}

		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x3CBD730", Offset = "0x3CBD730", VA = "0x3CBD730")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Filter()
		{
			return null;
		}

		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x3CBD880", Offset = "0x3CBD880", VA = "0x3CBD880")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Map()
		{
			return null;
		}

		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x3CBD9D0", Offset = "0x3CBD9D0", VA = "0x3CBD9D0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Reduce()
		{
			return null;
		}

		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x3CBDB20", Offset = "0x3CBDB20", VA = "0x3CBDB20")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Randomize()
		{
			return null;
		}

		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x3CBDC70", Offset = "0x3CBDC70", VA = "0x3CBDC70")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__ToSet()
		{
			return null;
		}

		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x3CBDDC0", Offset = "0x3CBDDC0", VA = "0x3CBDDC0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Copy()
		{
			return null;
		}
	}

	[Token(Token = "0x4000D3A")]
	[FieldOffset(Offset = "0x30")]
	public List<object> List;

	[Token(Token = "0x4000D3B")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x170001A9")]
	public int Count
	{
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x3CBB060", Offset = "0x3CBB060", VA = "0x3CBB060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AA")]
	public override string ClassName
	{
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x3CBC200", Offset = "0x3CBC200", VA = "0x3CBC200", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x3CBC230", Offset = "0x3CBC230", VA = "0x3CBC230", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AC")]
	public override bool IsStatic
	{
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x3CBC240", Offset = "0x3CBC240", VA = "0x3CBC240", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AD")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x3CBC250", Offset = "0x3CBC250", VA = "0x3CBC250", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x3CBAE60", Offset = "0x3CBAE60", VA = "0x3CBAE60")]
	public CustomLogicListBuiltin()
	{
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x3CBAF00", Offset = "0x3CBAF00", VA = "0x3CBAF00")]
	public CustomLogicListBuiltin(params object[] parameterValues)
	{
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x3CB7D60", Offset = "0x3CB7D60", VA = "0x3CB7D60")]
	public CustomLogicListBuiltin(IEnumerable<object> enumerable, bool isReadOnly = false)
	{
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x3CBB0A0", Offset = "0x3CBB0A0", VA = "0x3CBB0A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x3CBB140", Offset = "0x3CBB140", VA = "0x3CBB140")]
	public object Get(int index)
	{
		return null;
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x3CBB1B0", Offset = "0x3CBB1B0", VA = "0x3CBB1B0")]
	public void Set(int index, object value)
	{
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x3CBB270", Offset = "0x3CBB270", VA = "0x3CBB270")]
	public void Add(object value)
	{
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x3CBB360", Offset = "0x3CBB360", VA = "0x3CBB360")]
	public void InsertAt(int index, object value)
	{
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x3CBB420", Offset = "0x3CBB420", VA = "0x3CBB420")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x3CBB4D0", Offset = "0x3CBB4D0", VA = "0x3CBB4D0")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x3CBB570", Offset = "0x3CBB570", VA = "0x3CBB570")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x3CBB650", Offset = "0x3CBB650", VA = "0x3CBB650")]
	public void Sort()
	{
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x3CBB6E0", Offset = "0x3CBB6E0", VA = "0x3CBB6E0")]
	public void SortCustom(UserMethod method)
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x3CBB810", Offset = "0x3CBB810", VA = "0x3CBB810")]
	public CustomLogicListBuiltin Filter(UserMethod method)
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x3CBB960", Offset = "0x3CBB960", VA = "0x3CBB960")]
	public CustomLogicListBuiltin Map(UserMethod method)
	{
		return null;
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x3CBBAB0", Offset = "0x3CBBAB0", VA = "0x3CBBAB0")]
	public object Reduce(UserMethod method, object initialValue)
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x3CBBBA0", Offset = "0x3CBBBA0", VA = "0x3CBBBA0")]
	public CustomLogicListBuiltin Randomize()
	{
		return null;
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x3CBBD10", Offset = "0x3CBBD10", VA = "0x3CBBD10")]
	public CustomLogicSetBuiltin ToSet()
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x3CBBFA0", Offset = "0x3CBBFA0", VA = "0x3CBBFA0")]
	public CustomLogicListBuiltin Copy()
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x3CBC030", Offset = "0x3CBC030", VA = "0x3CBC030", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
