// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animator
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/Animator.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimatorControllerParameter.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Animator.h")]
public class Animator : Behaviour
{
	[Token(Token = "0x17000011")]
	public bool hasRootMotion
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x2EB0AC0", Offset = "0x2EAF0C0", VA = "0x182EB0AC0")]
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
		[Address(RVA = "0x2EB0840", Offset = "0x2EAEE40", VA = "0x182EB0840")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000013")]
	public Quaternion deltaRotation
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x2EB0930", Offset = "0x2EAEF30", VA = "0x182EB0930")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x17000014")]
	public bool applyRootMotion
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x2EB0770", Offset = "0x2EAED70", VA = "0x182EB0770")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x2EB0DD0", Offset = "0x2EAF3D0", VA = "0x182EB0DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float speed
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x2EB0D00", Offset = "0x2EAF300", VA = "0x182EB0D00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x2EB0F80", Offset = "0x2EAF580", VA = "0x182EB0F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public AnimatorCullingMode cullingMode
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x2EB0EA0", Offset = "0x2EAF4A0", VA = "0x182EB0EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public RuntimeAnimatorController runtimeAnimatorController
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x2EB0C20", Offset = "0x2EAF220", VA = "0x182EB0C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public bool hasBoundPlayables
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x2EB0A00", Offset = "0x2EAF000", VA = "0x182EB0A00")]
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
		[Address(RVA = "0x2EB0B40", Offset = "0x2EAF140", VA = "0x182EB0B40")]
		get
		{
			return default(PlayableGraph);
		}
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2EAF220", Offset = "0x2EAD820", VA = "0x182EAF220")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2EAFF30", Offset = "0x2EAE530", VA = "0x182EAFF30")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2EAEE30", Offset = "0x2EAD430", VA = "0x182EAEE30")]
	public bool GetBool(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2EAFCF0", Offset = "0x2EAE2F0", VA = "0x182EAFCF0")]
	public void SetBool(string name, bool value)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2EAF450", Offset = "0x2EADA50", VA = "0x182EAF450")]
	public int GetInteger(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2EB0170", Offset = "0x2EAE770", VA = "0x182EB0170")]
	public void SetInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2EB0470", Offset = "0x2EAEA70", VA = "0x182EB0470")]
	public void SetTrigger(string name)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2EAFAB0", Offset = "0x2EAE0B0", VA = "0x182EAFAB0")]
	public void ResetTrigger(string name)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2EAF4A0", Offset = "0x2EADAA0", VA = "0x182EAF4A0")]
	public float GetLayerWeight(int layerIndex)
	{
		return default(float);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2EB01D0", Offset = "0x2EAE7D0", VA = "0x182EB01D0")]
	public void SetLayerWeight(int layerIndex, float weight)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2EAE9B0", Offset = "0x2EACFB0", VA = "0x182EAE9B0")]
	private void GetAnimatorStateInfo(int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2EAEE40", Offset = "0x2EAD440", VA = "0x182EAEE40")]
	public AnimatorStateInfo GetCurrentAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2EAF530", Offset = "0x2EADB30", VA = "0x182EAF530")]
	public AnimatorStateInfo GetNextAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2EAEAA0", Offset = "0x2EAD0A0", VA = "0x182EAEAA0")]
	private void GetAnimatorTransitionInfo(int layerIndex, out AnimatorTransitionInfo info)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2EAEB40", Offset = "0x2EAD140", VA = "0x182EAEB40")]
	public AnimatorTransitionInfo GetAnimatorTransitionInfo(int layerIndex)
	{
		return default(AnimatorTransitionInfo);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2EAF650", Offset = "0x2EADC50", VA = "0x182EAF650")]
	public bool IsInTransition(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2EAE670", Offset = "0x2EACC70", VA = "0x182EAE670")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2EAE5A0", Offset = "0x2EACBA0", VA = "0x182EAE5A0")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2EAE7E0", Offset = "0x2EACDE0", VA = "0x182EAE7E0")]
	public void CrossFade(string stateName, float normalizedTransitionDuration)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2EAE8A0", Offset = "0x2EACEA0", VA = "0x182EAE8A0")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2EAE730", Offset = "0x2EACD30", VA = "0x182EAE730")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::CrossFade", HasExplicitThis = true)]
	public void CrossFade(int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2EAF7F0", Offset = "0x2EADDF0", VA = "0x182EAF7F0")]
	public void Play(string stateName, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2EAF740", Offset = "0x2EADD40", VA = "0x182EAF740")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::Play", HasExplicitThis = true)]
	public void Play(int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2EB04C0", Offset = "0x2EAEAC0", VA = "0x182EB04C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ScriptingStringToCRC32", IsThreadSafe = true)]
	public static int StringToHash(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2EAEF70", Offset = "0x2EAD570", VA = "0x182EAEF70")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetCurrentGraph", HasExplicitThis = true)]
	private void GetCurrentGraph(ref PlayableGraph graph)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2EAFD60", Offset = "0x2EAE360", VA = "0x182EAFD60")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetFloatString", HasExplicitThis = true)]
	private void SetFloatString(string name, float value)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2EAF050", Offset = "0x2EAD650", VA = "0x182EAF050")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetFloatString", HasExplicitThis = true)]
	private float GetFloatString(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2EAFB20", Offset = "0x2EAE120", VA = "0x182EAFB20")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetBoolString", HasExplicitThis = true)]
	private void SetBoolString(string name, bool value)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2EAEC60", Offset = "0x2EAD260", VA = "0x182EAEC60")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetBoolString", HasExplicitThis = true)]
	private bool GetBoolString(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x2EAFFA0", Offset = "0x2EAE5A0", VA = "0x182EAFFA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetIntegerString", HasExplicitThis = true)]
	private void SetIntegerString(string name, int value)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2EAF280", Offset = "0x2EAD880", VA = "0x182EAF280")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetIntegerString", HasExplicitThis = true)]
	private int GetIntegerString(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2EB02C0", Offset = "0x2EAE8C0", VA = "0x182EB02C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetTriggerString", HasExplicitThis = true)]
	private void SetTriggerString(string name)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2EAF900", Offset = "0x2EADF00", VA = "0x182EAF900")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::ResetTriggerString", HasExplicitThis = true)]
	private void ResetTriggerString(string name)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2EB06A0", Offset = "0x2EAECA0", VA = "0x182EB06A0")]
	[UnityEngine.Bindings.NativeMethod("UpdateWithDelta")]
	public void Update(float deltaTime)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2EAE4C0", Offset = "0x2EACAC0", VA = "0x182EAE4C0")]
	public void ApplyBuiltinRootMotion()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Animator()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2EB0A80", Offset = "0x2EAF080", VA = "0x182EB0A80")]
	private static extern bool get_hasRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2EB07F0", Offset = "0x2EAEDF0", VA = "0x182EB07F0")]
	private static extern void get_deltaPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2EB08E0", Offset = "0x2EAEEE0", VA = "0x182EB08E0")]
	private static extern void get_deltaRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2EB0730", Offset = "0x2EAED30", VA = "0x182EB0730")]
	private static extern bool get_applyRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2EB0D80", Offset = "0x2EAF380", VA = "0x182EB0D80")]
	private static extern void set_applyRootMotion_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2EAF460", Offset = "0x2EADA60", VA = "0x182EAF460")]
	private static extern float GetLayerWeight_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2EB0180", Offset = "0x2EAE780", VA = "0x182EB0180")]
	private static extern void SetLayerWeight_Injected(IntPtr _unity_self, int layerIndex, float weight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2EAE960", Offset = "0x2EACF60", VA = "0x182EAE960")]
	private static extern void GetAnimatorStateInfo_Injected(IntPtr _unity_self, int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2EAEA50", Offset = "0x2EAD050", VA = "0x182EAEA50")]
	private static extern void GetAnimatorTransitionInfo_Injected(IntPtr _unity_self, int layerIndex, out AnimatorTransitionInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2EAF610", Offset = "0x2EADC10", VA = "0x182EAF610")]
	private static extern bool IsInTransition_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2EB0CC0", Offset = "0x2EAF2C0", VA = "0x182EB0CC0")]
	private static extern float get_speed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2EB0F30", Offset = "0x2EAF530", VA = "0x182EB0F30")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2EAE540", Offset = "0x2EACB40", VA = "0x182EAE540")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2EAF6E0", Offset = "0x2EADCE0", VA = "0x182EAF6E0")]
	private static extern void Play_Injected(IntPtr _unity_self, int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2EB0E60", Offset = "0x2EAF460", VA = "0x182EB0E60")]
	private static extern void set_cullingMode_Injected(IntPtr _unity_self, AnimatorCullingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2EB0BE0", Offset = "0x2EAF1E0", VA = "0x182EB0BE0")]
	private static extern IntPtr get_runtimeAnimatorController_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2EB09C0", Offset = "0x2EAEFC0", VA = "0x182EB09C0")]
	private static extern bool get_hasBoundPlayables_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2EB0480", Offset = "0x2EAEA80", VA = "0x182EB0480")]
	private static extern int StringToHash_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2EAEF20", Offset = "0x2EAD520", VA = "0x182EAEF20")]
	private static extern void GetCurrentGraph_Injected(IntPtr _unity_self, ref PlayableGraph graph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2EAFD00", Offset = "0x2EAE300", VA = "0x182EAFD00")]
	private static extern void SetFloatString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2EAF000", Offset = "0x2EAD600", VA = "0x182EAF000")]
	private static extern float GetFloatString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2EAFAC0", Offset = "0x2EAE0C0", VA = "0x182EAFAC0")]
	private static extern void SetBoolString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2EAEC10", Offset = "0x2EAD210", VA = "0x182EAEC10")]
	private static extern bool GetBoolString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2EAFF40", Offset = "0x2EAE540", VA = "0x182EAFF40")]
	private static extern void SetIntegerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2EAF230", Offset = "0x2EAD830", VA = "0x182EAF230")]
	private static extern int GetIntegerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2EB0270", Offset = "0x2EAE870", VA = "0x182EB0270")]
	private static extern void SetTriggerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2EAF8B0", Offset = "0x2EADEB0", VA = "0x182EAF8B0")]
	private static extern void ResetTriggerString_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2EB0650", Offset = "0x2EAEC50", VA = "0x182EB0650")]
	private static extern void Update_Injected(IntPtr _unity_self, float deltaTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2EAE480", Offset = "0x2EACA80", VA = "0x182EAE480")]
	private static extern void ApplyBuiltinRootMotion_Injected(IntPtr _unity_self);
}
