using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000294")]
[CompilerGenerated]
internal class CustomLogicVector2Builtin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x2000295")]
	public static class Factory
	{
		[Token(Token = "0x6000FD0")]
		[Address(RVA = "0x3CC8B80", Offset = "0x3CC8B80", VA = "0x3CC8B80")]
		public static CustomLogicVector2Builtin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000296")]
	public static class Bindings
	{
		[Token(Token = "0x4000D79")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6000FD1")]
		[Address(RVA = "0x3CC8E30", Offset = "0x3CC8E30", VA = "0x3CC8E30")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x3CC9AF0", Offset = "0x3CC9AF0", VA = "0x3CC9AF0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__X()
		{
			return null;
		}

		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x3CC9BD0", Offset = "0x3CC9BD0", VA = "0x3CC9BD0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Y()
		{
			return null;
		}

		[Token(Token = "0x6000FD4")]
		[Address(RVA = "0x3CC9CB0", Offset = "0x3CC9CB0", VA = "0x3CC9CB0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Normalized()
		{
			return null;
		}

		[Token(Token = "0x6000FD5")]
		[Address(RVA = "0x3CC9D50", Offset = "0x3CC9D50", VA = "0x3CC9D50")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Magnitude()
		{
			return null;
		}

		[Token(Token = "0x6000FD6")]
		[Address(RVA = "0x3CC9DF0", Offset = "0x3CC9DF0", VA = "0x3CC9DF0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__SqrMagnitude()
		{
			return null;
		}

		[Token(Token = "0x6000FD7")]
		[Address(RVA = "0x3CC9E90", Offset = "0x3CC9E90", VA = "0x3CC9E90")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Zero()
		{
			return null;
		}

		[Token(Token = "0x6000FD8")]
		[Address(RVA = "0x3CC9F30", Offset = "0x3CC9F30", VA = "0x3CC9F30")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__One()
		{
			return null;
		}

		[Token(Token = "0x6000FD9")]
		[Address(RVA = "0x3CC9FD0", Offset = "0x3CC9FD0", VA = "0x3CC9FD0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x6000FDA")]
		[Address(RVA = "0x3CCA070", Offset = "0x3CCA070", VA = "0x3CCA070")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Down()
		{
			return null;
		}

		[Token(Token = "0x6000FDB")]
		[Address(RVA = "0x3CCA110", Offset = "0x3CCA110", VA = "0x3CCA110")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Left()
		{
			return null;
		}

		[Token(Token = "0x6000FDC")]
		[Address(RVA = "0x3CCA1B0", Offset = "0x3CCA1B0", VA = "0x3CCA1B0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x6000FDD")]
		[Address(RVA = "0x3CCA250", Offset = "0x3CCA250", VA = "0x3CCA250")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__NegativeInfinity()
		{
			return null;
		}

		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x3CCA2F0", Offset = "0x3CCA2F0", VA = "0x3CCA2F0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__PositiveInfinity()
		{
			return null;
		}

		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x3CCA390", Offset = "0x3CCA390", VA = "0x3CCA390")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Angle()
		{
			return null;
		}

		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x3CCA4E0", Offset = "0x3CCA4E0", VA = "0x3CCA4E0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__ClampMagnitude()
		{
			return null;
		}

		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x3CCA630", Offset = "0x3CCA630", VA = "0x3CCA630")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Distance()
		{
			return null;
		}

		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x3CCA780", Offset = "0x3CCA780", VA = "0x3CCA780")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Dot()
		{
			return null;
		}

		[Token(Token = "0x6000FE3")]
		[Address(RVA = "0x3CCA8D0", Offset = "0x3CCA8D0", VA = "0x3CCA8D0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Lerp()
		{
			return null;
		}

		[Token(Token = "0x6000FE4")]
		[Address(RVA = "0x3CCAA20", Offset = "0x3CCAA20", VA = "0x3CCAA20")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__LerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x6000FE5")]
		[Address(RVA = "0x3CCAB70", Offset = "0x3CCAB70", VA = "0x3CCAB70")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Max()
		{
			return null;
		}

		[Token(Token = "0x6000FE6")]
		[Address(RVA = "0x3CCACC0", Offset = "0x3CCACC0", VA = "0x3CCACC0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Min()
		{
			return null;
		}

		[Token(Token = "0x6000FE7")]
		[Address(RVA = "0x3CCAE10", Offset = "0x3CCAE10", VA = "0x3CCAE10")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__MoveTowards()
		{
			return null;
		}

		[Token(Token = "0x6000FE8")]
		[Address(RVA = "0x3CCAF60", Offset = "0x3CCAF60", VA = "0x3CCAF60")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Reflect()
		{
			return null;
		}

		[Token(Token = "0x6000FE9")]
		[Address(RVA = "0x3CCB0B0", Offset = "0x3CCB0B0", VA = "0x3CCB0B0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__SignedAngle()
		{
			return null;
		}

		[Token(Token = "0x6000FEA")]
		[Address(RVA = "0x3CCB200", Offset = "0x3CCB200", VA = "0x3CCB200")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__SmoothDamp()
		{
			return null;
		}

		[Token(Token = "0x6000FEB")]
		[Address(RVA = "0x3CCB350", Offset = "0x3CCB350", VA = "0x3CCB350")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6000FEC")]
		[Address(RVA = "0x3CCB4A0", Offset = "0x3CCB4A0", VA = "0x3CCB4A0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Normalize()
		{
			return null;
		}

		[Token(Token = "0x6000FED")]
		[Address(RVA = "0x3CCB5F0", Offset = "0x3CCB5F0", VA = "0x3CCB5F0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Copy__()
		{
			return null;
		}

		[Token(Token = "0x6000FEE")]
		[Address(RVA = "0x3CCB740", Offset = "0x3CCB740", VA = "0x3CCB740")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Add__()
		{
			return null;
		}

		[Token(Token = "0x6000FEF")]
		[Address(RVA = "0x3CCB890", Offset = "0x3CCB890", VA = "0x3CCB890")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Sub__()
		{
			return null;
		}

		[Token(Token = "0x6000FF0")]
		[Address(RVA = "0x3CCB9E0", Offset = "0x3CCB9E0", VA = "0x3CCB9E0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Mul__()
		{
			return null;
		}

		[Token(Token = "0x6000FF1")]
		[Address(RVA = "0x3CCBB30", Offset = "0x3CCBB30", VA = "0x3CCBB30")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Div__()
		{
			return null;
		}

		[Token(Token = "0x6000FF2")]
		[Address(RVA = "0x3CCBC80", Offset = "0x3CCBC80", VA = "0x3CCBC80")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x6000FF3")]
		[Address(RVA = "0x3CCBDD0", Offset = "0x3CCBDD0", VA = "0x3CCBDD0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4000D78")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _value;

	[Token(Token = "0x170001C1")]
	public float X
	{
		[Token(Token = "0x6000FA4")]
		[Address(RVA = "0x3CC6D70", Offset = "0x3CC6D70", VA = "0x3CC6D70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000FA5")]
		[Address(RVA = "0x3CC6D80", Offset = "0x3CC6D80", VA = "0x3CC6D80")]
		set
		{
		}
	}

	[Token(Token = "0x170001C2")]
	public float Y
	{
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x3CC6D90", Offset = "0x3CC6D90", VA = "0x3CC6D90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x3CC6DA0", Offset = "0x3CC6DA0", VA = "0x3CC6DA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C3")]
	public CustomLogicVector2Builtin Normalized
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x3CC6DB0", Offset = "0x3CC6DB0", VA = "0x3CC6DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public float Magnitude
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x3CC6FB0", Offset = "0x3CC6FB0", VA = "0x3CC6FB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001C5")]
	public float SqrMagnitude
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x3CC7030", Offset = "0x3CC7030", VA = "0x3CC7030")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001C6")]
	public static CustomLogicVector2Builtin Zero
	{
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x3CC7050", Offset = "0x3CC7050", VA = "0x3CC7050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	public static CustomLogicVector2Builtin One
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x3CC7100", Offset = "0x3CC7100", VA = "0x3CC7100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public static CustomLogicVector2Builtin Up
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x3CC71B0", Offset = "0x3CC71B0", VA = "0x3CC71B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	public static CustomLogicVector2Builtin Down
	{
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x3CC7260", Offset = "0x3CC7260", VA = "0x3CC7260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	public static CustomLogicVector2Builtin Left
	{
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x3CC7310", Offset = "0x3CC7310", VA = "0x3CC7310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CB")]
	public static CustomLogicVector2Builtin Right
	{
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x3CC73C0", Offset = "0x3CC73C0", VA = "0x3CC73C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public static CustomLogicVector2Builtin NegativeInfinity
	{
		[Token(Token = "0x6000FB1")]
		[Address(RVA = "0x3CC7470", Offset = "0x3CC7470", VA = "0x3CC7470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public static CustomLogicVector2Builtin PositiveInfinity
	{
		[Token(Token = "0x6000FB2")]
		[Address(RVA = "0x3CC7520", Offset = "0x3CC7520", VA = "0x3CC7520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	public override string ClassName
	{
		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x3CC8B20", Offset = "0x3CC8B20", VA = "0x3CC8B20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0x3CC8B50", Offset = "0x3CC8B50", VA = "0x3CC8B50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D0")]
	public override bool IsStatic
	{
		[Token(Token = "0x6000FCE")]
		[Address(RVA = "0x3CC8B60", Offset = "0x3CC8B60", VA = "0x3CC8B60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D1")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6000FCF")]
		[Address(RVA = "0x3CC8B70", Offset = "0x3CC8B70", VA = "0x3CC8B70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x3CC6BC0", Offset = "0x3CC6BC0", VA = "0x3CC6BC0")]
	public CustomLogicVector2Builtin()
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x3CC6C30", Offset = "0x3CC6C30", VA = "0x3CC6C30")]
	public CustomLogicVector2Builtin(float xy)
	{
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x3CC6CA0", Offset = "0x3CC6CA0", VA = "0x3CC6CA0")]
	public CustomLogicVector2Builtin(float x, float y)
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x3CC6D10", Offset = "0x3CC6D10", VA = "0x3CC6D10")]
	public CustomLogicVector2Builtin(Vector2 value)
	{
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x3CC75D0", Offset = "0x3CC75D0", VA = "0x3CC75D0")]
	public static float Angle(CustomLogicVector2Builtin from, CustomLogicVector2Builtin to)
	{
		return default(float);
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x3CC7760", Offset = "0x3CC7760", VA = "0x3CC7760")]
	public static CustomLogicVector2Builtin ClampMagnitude(CustomLogicVector2Builtin vector, float maxLength)
	{
		return null;
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x3CC78B0", Offset = "0x3CC78B0", VA = "0x3CC78B0")]
	public static float Distance(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x3CC7950", Offset = "0x3CC7950", VA = "0x3CC7950")]
	public static float Dot(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x3CC7980", Offset = "0x3CC7980", VA = "0x3CC7980")]
	public static CustomLogicVector2Builtin Lerp(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x3CC7A70", Offset = "0x3CC7A70", VA = "0x3CC7A70")]
	public static CustomLogicVector2Builtin LerpUnclamped(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x3CC7B50", Offset = "0x3CC7B50", VA = "0x3CC7B50")]
	public static CustomLogicVector2Builtin Max(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x3CC7C10", Offset = "0x3CC7C10", VA = "0x3CC7C10")]
	public static CustomLogicVector2Builtin Min(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x3CC7CD0", Offset = "0x3CC7CD0", VA = "0x3CC7CD0")]
	public static CustomLogicVector2Builtin MoveTowards(CustomLogicVector2Builtin current, CustomLogicVector2Builtin target, float maxDistanceDelta)
	{
		return null;
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x3CC7E80", Offset = "0x3CC7E80", VA = "0x3CC7E80")]
	public static CustomLogicVector2Builtin Reflect(CustomLogicVector2Builtin inDirection, CustomLogicVector2Builtin inNormal)
	{
		return null;
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x3CC7F80", Offset = "0x3CC7F80", VA = "0x3CC7F80")]
	public static float SignedAngle(CustomLogicVector2Builtin from, CustomLogicVector2Builtin to)
	{
		return default(float);
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x3CC8140", Offset = "0x3CC8140", VA = "0x3CC8140")]
	public static CustomLogicVector2Builtin SmoothDamp(CustomLogicVector2Builtin current, CustomLogicVector2Builtin target, CustomLogicVector2Builtin currentVelocity, float smoothTime, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x3CC8240", Offset = "0x3CC8240", VA = "0x3CC8240")]
	public void Set(float x, float y)
	{
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x3CC8250", Offset = "0x3CC8250", VA = "0x3CC8250")]
	public void Normalize()
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x3CC8320", Offset = "0x3CC8320", VA = "0x3CC8320", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x3CC8330", Offset = "0x3CC8330", VA = "0x3CC8330", Slot = "17")]
	public virtual object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x3CC83C0", Offset = "0x3CC83C0", VA = "0x3CC83C0", Slot = "9")]
	public object __Add__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x3CC8500", Offset = "0x3CC8500", VA = "0x3CC8500", Slot = "10")]
	public object __Sub__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x3CC8640", Offset = "0x3CC8640", VA = "0x3CC8640", Slot = "11")]
	public object __Mul__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x3CC8840", Offset = "0x3CC8840", VA = "0x3CC8840", Slot = "12")]
	public object __Div__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x3CC89D0", Offset = "0x3CC89D0", VA = "0x3CC89D0", Slot = "14")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x3CC8A90", Offset = "0x3CC8A90", VA = "0x3CC8A90", Slot = "15")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x3CC8AC0", Offset = "0x3CC8AC0", VA = "0x3CC8AC0", Slot = "13")]
	public object __Mod__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x3CC8B00", Offset = "0x3CC8B00", VA = "0x3CC8B00")]
	public static implicit operator Vector2(CustomLogicVector2Builtin value)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x3CC6F20", Offset = "0x3CC6F20", VA = "0x3CC6F20")]
	public static implicit operator CustomLogicVector2Builtin(Vector2 value)
	{
		return null;
	}
}
