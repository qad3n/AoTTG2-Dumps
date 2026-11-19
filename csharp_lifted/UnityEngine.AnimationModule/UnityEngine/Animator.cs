// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000015")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimatorControllerParameter.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/Animator.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Animator.h")]
public class Animator : Behaviour
{
	[Token(Token = "0x17000011")]
	public bool hasRootMotion
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x68A9AA0", Offset = "0x68A8AA0", VA = "0x68A9AA0")]
		[UnityEngine.Bindings.NativeMethod("HasRootMotion")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	public Vector3 deltaPosition
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x68AA960", Offset = "0x68A9960", VA = "0x68AA960")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000013")]
	public Quaternion deltaRotation
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x68AAA40", Offset = "0x68A9A40", VA = "0x68AAA40")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x17000014")]
	public bool applyRootMotion
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x68AAB20", Offset = "0x68A9B20", VA = "0x68AAB20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x68AABD0", Offset = "0x68A9BD0", VA = "0x68AABD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float speed
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x68AB2D0", Offset = "0x68AA2D0", VA = "0x68AB2D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x68AB380", Offset = "0x68AA380", VA = "0x68AB380")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public AnimatorCullingMode cullingMode
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x68AB9F0", Offset = "0x68AA9F0", VA = "0x68AB9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public RuntimeAnimatorController runtimeAnimatorController
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x68ABAB0", Offset = "0x68AAAB0", VA = "0x68ABAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public bool hasBoundPlayables
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x68ABB80", Offset = "0x68AAB80", VA = "0x68ABB80")]
		[UnityEngine.Bindings.NativeMethod("HasBoundPlayables")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public PlayableGraph playableGraph
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x68ABC60", Offset = "0x68AAC60", VA = "0x68ABC60")]
		get
		{
			return default(PlayableGraph);
		}
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x68A9B50", Offset = "0x68A8B50", VA = "0x68A9B50")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x68A9D10", Offset = "0x68A8D10", VA = "0x68A9D10")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x68A9EE0", Offset = "0x68A8EE0", VA = "0x68A9EE0")]
	public bool GetBool(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x68AA0A0", Offset = "0x68A90A0", VA = "0x68AA0A0")]
	public void SetBool(string name, bool value)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x68AA260", Offset = "0x68A9260", VA = "0x68AA260")]
	public int GetInteger(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x68AA420", Offset = "0x68A9420", VA = "0x68AA420")]
	public void SetInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x68AA5E0", Offset = "0x68A95E0", VA = "0x68AA5E0")]
	public void SetTrigger(string name)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x68AA7A0", Offset = "0x68A97A0", VA = "0x68AA7A0")]
	public void ResetTrigger(string name)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x68AAC90", Offset = "0x68A9C90", VA = "0x68AAC90")]
	public float GetLayerWeight(int layerIndex)
	{
		return default(float);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x68AAD50", Offset = "0x68A9D50", VA = "0x68AAD50")]
	public void SetLayerWeight(int layerIndex, float weight)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x68AAE20", Offset = "0x68A9E20", VA = "0x68AAE20")]
	private void GetAnimatorStateInfo(int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x68AAF00", Offset = "0x68A9F00", VA = "0x68AAF00")]
	public AnimatorStateInfo GetCurrentAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x68AAFC0", Offset = "0x68A9FC0", VA = "0x68AAFC0")]
	public AnimatorStateInfo GetNextAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x68AB090", Offset = "0x68AA090", VA = "0x68AB090")]
	private void GetAnimatorTransitionInfo(int layerIndex, out AnimatorTransitionInfo info)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x68AB160", Offset = "0x68AA160", VA = "0x68AB160")]
	public AnimatorTransitionInfo GetAnimatorTransitionInfo(int layerIndex)
	{
		return default(AnimatorTransitionInfo);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x68AB210", Offset = "0x68AA210", VA = "0x68AB210")]
	public bool IsInTransition(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x68AB460", Offset = "0x68AA460", VA = "0x68AB460")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x68AB5D0", Offset = "0x68AA5D0", VA = "0x68AB5D0")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x68AB680", Offset = "0x68AA680", VA = "0x68AB680")]
	public void CrossFade(string stateName, float normalizedTransitionDuration)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x68AB510", Offset = "0x68AA510", VA = "0x68AB510")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x68AB730", Offset = "0x68AA730", VA = "0x68AB730")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::CrossFade", HasExplicitThis = true)]
	public void CrossFade(int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x68AB860", Offset = "0x68AA860", VA = "0x68AB860")]
	public void Play(string stateName, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x68AB900", Offset = "0x68AA900", VA = "0x68AB900")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::Play", HasExplicitThis = true)]
	public void Play(int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x68A98F0", Offset = "0x68A88F0", VA = "0x68A98F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ScriptingStringToCRC32", IsThreadSafe = true)]
	public static int StringToHash(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x68ABCF0", Offset = "0x68AACF0", VA = "0x68ABCF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetCurrentGraph", HasExplicitThis = true)]
	private void GetCurrentGraph(ref PlayableGraph graph)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x68A9D20", Offset = "0x68A8D20", VA = "0x68A9D20")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetFloatString", HasExplicitThis = true)]
	private void SetFloatString(string name, float value)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x68A9B60", Offset = "0x68A8B60", VA = "0x68A9B60")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetFloatString", HasExplicitThis = true)]
	private float GetFloatString(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x68AA0B0", Offset = "0x68A90B0", VA = "0x68AA0B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetBoolString", HasExplicitThis = true)]
	private void SetBoolString(string name, bool value)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x68A9EF0", Offset = "0x68A8EF0", VA = "0x68A9EF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetBoolString", HasExplicitThis = true)]
	private bool GetBoolString(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x68AA430", Offset = "0x68A9430", VA = "0x68AA430")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetIntegerString", HasExplicitThis = true)]
	private void SetIntegerString(string name, int value)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x68AA270", Offset = "0x68A9270", VA = "0x68AA270")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetIntegerString", HasExplicitThis = true)]
	private int GetIntegerString(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x68AA5F0", Offset = "0x68A95F0", VA = "0x68AA5F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetTriggerString", HasExplicitThis = true)]
	private void SetTriggerString(string name)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x68AA7B0", Offset = "0x68A97B0", VA = "0x68AA7B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::ResetTriggerString", HasExplicitThis = true)]
	private void ResetTriggerString(string name)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x68ABFC0", Offset = "0x68AAFC0", VA = "0x68ABFC0")]
	[UnityEngine.Bindings.NativeMethod("UpdateWithDelta")]
	public void Update(float deltaTime)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x68AC0A0", Offset = "0x68AB0A0", VA = "0x68AC0A0")]
	public void ApplyBuiltinRootMotion()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x68AC150", Offset = "0x68AB150", VA = "0x68AC150")]
	public Animator()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x68A9B20", Offset = "0x68A8B20", VA = "0x68A9B20")]
	private static extern bool get_hasRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x68AAA00", Offset = "0x68A9A00", VA = "0x68AAA00")]
	private static extern void get_deltaPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x68AAAE0", Offset = "0x68A9AE0", VA = "0x68AAAE0")]
	private static extern void get_deltaRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x68AABA0", Offset = "0x68A9BA0", VA = "0x68AABA0")]
	private static extern bool get_applyRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x68AAC50", Offset = "0x68A9C50", VA = "0x68AAC50")]
	private static extern void set_applyRootMotion_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x68AAD10", Offset = "0x68A9D10", VA = "0x68AAD10")]
	private static extern float GetLayerWeight_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x68AADE0", Offset = "0x68A9DE0", VA = "0x68AADE0")]
	private static extern void SetLayerWeight_Injected(IntPtr _unity_self, int layerIndex, float weight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x68AAEB0", Offset = "0x68A9EB0", VA = "0x68AAEB0")]
	private static extern void GetAnimatorStateInfo_Injected(IntPtr _unity_self, int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x68AB120", Offset = "0x68AA120", VA = "0x68AB120")]
	private static extern void GetAnimatorTransitionInfo_Injected(IntPtr _unity_self, int layerIndex, out AnimatorTransitionInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x68AB290", Offset = "0x68AA290", VA = "0x68AB290")]
	private static extern bool IsInTransition_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x68AB350", Offset = "0x68AA350", VA = "0x68AB350")]
	private static extern float get_speed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x68AB410", Offset = "0x68AA410", VA = "0x68AB410")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x68AB7F0", Offset = "0x68AA7F0", VA = "0x68AB7F0")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x68AB9A0", Offset = "0x68AA9A0", VA = "0x68AB9A0")]
	private static extern void Play_Injected(IntPtr _unity_self, int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x68ABA70", Offset = "0x68AAA70", VA = "0x68ABA70")]
	private static extern void set_cullingMode_Injected(IntPtr _unity_self, AnimatorCullingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x68ABB50", Offset = "0x68AAB50", VA = "0x68ABB50")]
	private static extern IntPtr get_runtimeAnimatorController_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x68ABC00", Offset = "0x68AAC00", VA = "0x68ABC00")]
	private static extern bool get_hasBoundPlayables_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x68ABC30", Offset = "0x68AAC30", VA = "0x68ABC30")]
	private static extern int StringToHash_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x68ABD70", Offset = "0x68AAD70", VA = "0x68ABD70")]
	private static extern void GetCurrentGraph_Injected(IntPtr _unity_self, ref PlayableGraph graph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x68ABDB0", Offset = "0x68AADB0", VA = "0x68ABDB0")]
	private static extern void SetFloatString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x68ABE00", Offset = "0x68AAE00", VA = "0x68ABE00")]
	private static extern float GetFloatString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x68ABE40", Offset = "0x68AAE40", VA = "0x68ABE40")]
	private static extern void SetBoolString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x68ABE80", Offset = "0x68AAE80", VA = "0x68ABE80")]
	private static extern bool GetBoolString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x68ABEC0", Offset = "0x68AAEC0", VA = "0x68ABEC0")]
	private static extern void SetIntegerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x68ABF00", Offset = "0x68AAF00", VA = "0x68ABF00")]
	private static extern int GetIntegerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x68ABF40", Offset = "0x68AAF40", VA = "0x68ABF40")]
	private static extern void SetTriggerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x68ABF80", Offset = "0x68AAF80", VA = "0x68ABF80")]
	private static extern void ResetTriggerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x68AC050", Offset = "0x68AB050", VA = "0x68AC050")]
	private static extern void Update_Injected(IntPtr _unity_self, float deltaTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x68AC120", Offset = "0x68AB120", VA = "0x68AC120")]
	private static extern void ApplyBuiltinRootMotion_Injected(IntPtr _unity_self);
}
