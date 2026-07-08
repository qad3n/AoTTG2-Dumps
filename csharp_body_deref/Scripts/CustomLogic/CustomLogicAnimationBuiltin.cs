using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200029C")]
[CompilerGenerated]
internal class CustomLogicAnimationBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x200029D")]
	public static class Factory
	{
		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x3CD81A0", Offset = "0x3CD81A0", VA = "0x3CD81A0")]
		public static CustomLogicAnimationBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200029E")]
	public static class Bindings
	{
		[Token(Token = "0x4000DB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60010D6")]
		[Address(RVA = "0x3CD8290", Offset = "0x3CD8290", VA = "0x3CD8290")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x3CD8820", Offset = "0x3CD8820", VA = "0x3CD8820")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x3CD8970", Offset = "0x3CD8970", VA = "0x3CD8970")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			return null;
		}

		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x3CD8AC0", Offset = "0x3CD8AC0", VA = "0x3CD8AC0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			return null;
		}

		[Token(Token = "0x60010DA")]
		[Address(RVA = "0x3CD8C10", Offset = "0x3CD8C10", VA = "0x3CD8C10")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__PlayAnimationQueued()
		{
			return null;
		}

		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x3CD8D60", Offset = "0x3CD8D60", VA = "0x3CD8D60")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__StopAnimation()
		{
			return null;
		}

		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x3CD8EB0", Offset = "0x3CD8EB0", VA = "0x3CD8EB0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__SetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x60010DD")]
		[Address(RVA = "0x3CD9000", Offset = "0x3CD9000", VA = "0x3CD9000")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x60010DE")]
		[Address(RVA = "0x3CD9150", Offset = "0x3CD9150", VA = "0x3CD9150")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			return null;
		}

		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x3CD92A0", Offset = "0x3CD92A0", VA = "0x3CD92A0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			return null;
		}

		[Token(Token = "0x60010E0")]
		[Address(RVA = "0x3CD93F0", Offset = "0x3CD93F0", VA = "0x3CD93F0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__SetAnimationNormalizedTime()
		{
			return null;
		}

		[Token(Token = "0x60010E1")]
		[Address(RVA = "0x3CD9540", Offset = "0x3CD9540", VA = "0x3CD9540")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__SetWeight()
		{
			return null;
		}

		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x3CD9690", Offset = "0x3CD9690", VA = "0x3CD9690")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetWeight()
		{
			return null;
		}
	}

	[Token(Token = "0x4000DB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Animation Value;

	[Token(Token = "0x4000DB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x170001E6")]
	public override string ClassName
	{
		[Token(Token = "0x60010D1")]
		[Address(RVA = "0x3CD8140", Offset = "0x3CD8140", VA = "0x3CD8140", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E7")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x3CD8170", Offset = "0x3CD8170", VA = "0x3CD8170", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	public override bool IsStatic
	{
		[Token(Token = "0x60010D3")]
		[Address(RVA = "0x3CD8180", Offset = "0x3CD8180", VA = "0x3CD8180", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E9")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x3CD8190", Offset = "0x3CD8190", VA = "0x3CD8190", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x3CD7DD0", Offset = "0x3CD7DD0", VA = "0x3CD7DD0")]
	public CustomLogicAnimationBuiltin()
	{
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x3CD7DE0", Offset = "0x3CD7DE0", VA = "0x3CD7DE0")]
	public CustomLogicAnimationBuiltin(BuiltinClassInstance owner, Animation animation)
	{
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x3CD7E70", Offset = "0x3CD7E70", VA = "0x3CD7E70")]
	public bool IsPlaying(string anim)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x3CD7E90", Offset = "0x3CD7E90", VA = "0x3CD7E90")]
	public void PlayAnimation(string anim, float fade = 0.1f, int layer = 0)
	{
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x3CD7EE0", Offset = "0x3CD7EE0", VA = "0x3CD7EE0")]
	public void PlayAnimationAt(string anim, float normalizedTime, float fade = 0.1f, int layer = 0)
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x3CD7F70", Offset = "0x3CD7F70", VA = "0x3CD7F70")]
	public void PlayAnimationQueued(string anim)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x3CD7F90", Offset = "0x3CD7F90", VA = "0x3CD7F90")]
	public void StopAnimation([Optional] string anim)
	{
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x3CD7FC0", Offset = "0x3CD7FC0", VA = "0x3CD7FC0")]
	public void SetAnimationSpeed(string name, float speed)
	{
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x3CD8000", Offset = "0x3CD8000", VA = "0x3CD8000")]
	public float GetAnimationSpeed(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x3CD8030", Offset = "0x3CD8030", VA = "0x3CD8030")]
	public float GetAnimationLength(string anim)
	{
		return default(float);
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x3CD8060", Offset = "0x3CD8060", VA = "0x3CD8060")]
	public float GetAnimationNormalizedTime(string anim)
	{
		return default(float);
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x3CD8090", Offset = "0x3CD8090", VA = "0x3CD8090")]
	public void SetAnimationNormalizedTime(string anim, float normalizedTime)
	{
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x3CD80D0", Offset = "0x3CD80D0", VA = "0x3CD80D0")]
	public void SetWeight(string anim, float weight)
	{
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x3CD8110", Offset = "0x3CD8110", VA = "0x3CD8110")]
	public float GetWeight(string anim)
	{
		return default(float);
	}
}
