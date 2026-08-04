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

[Token(Token = "0x2000014")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Animator.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/Animator.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimatorControllerParameter.bindings.h")]
public class Animator : Behaviour
{
	[Token(Token = "0x17000011")]
	public bool hasRootMotion
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x4DA3B40", Offset = "0x4DA3B40", VA = "0x4DA3B40")]
		[UnityEngine.Bindings.NativeMethod("HasRootMotion")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	public Vector3 deltaPosition
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x4DA4690", Offset = "0x4DA4690", VA = "0x4DA4690")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000013")]
	public Quaternion deltaRotation
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4DA4790", Offset = "0x4DA4790", VA = "0x4DA4790")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x17000014")]
	public bool applyRootMotion
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x4DA4890", Offset = "0x4DA4890", VA = "0x4DA4890")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4DA4960", Offset = "0x4DA4960", VA = "0x4DA4960")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float speed
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4DA5180", Offset = "0x4DA5180", VA = "0x4DA5180")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4DA5250", Offset = "0x4DA5250", VA = "0x4DA5250")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public AnimatorCullingMode cullingMode
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x4DA57E0", Offset = "0x4DA57E0", VA = "0x4DA57E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public RuntimeAnimatorController runtimeAnimatorController
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4DA58C0", Offset = "0x4DA58C0", VA = "0x4DA58C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public bool hasBoundPlayables
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x4DA5990", Offset = "0x4DA5990", VA = "0x4DA5990")]
		[UnityEngine.Bindings.NativeMethod("HasBoundPlayables")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public PlayableGraph playableGraph
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x4DA5A60", Offset = "0x4DA5A60", VA = "0x4DA5A60")]
		get
		{
			return default(PlayableGraph);
		}
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4DA3C10", Offset = "0x4DA3C10", VA = "0x4DA3C10")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4DA3D50", Offset = "0x4DA3D50", VA = "0x4DA3D50")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4DA3ED0", Offset = "0x4DA3ED0", VA = "0x4DA3ED0")]
	public bool GetBool(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4DA4010", Offset = "0x4DA4010", VA = "0x4DA4010")]
	public void SetBool(string name, bool value)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4DA4170", Offset = "0x4DA4170", VA = "0x4DA4170")]
	public int GetInteger(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4DA42B0", Offset = "0x4DA42B0", VA = "0x4DA42B0")]
	public void SetInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4DA4410", Offset = "0x4DA4410", VA = "0x4DA4410")]
	public void SetTrigger(string name)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4DA4550", Offset = "0x4DA4550", VA = "0x4DA4550")]
	public void ResetTrigger(string name)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4DA4A40", Offset = "0x4DA4A40", VA = "0x4DA4A40")]
	public float GetLayerWeight(int layerIndex)
	{
		return default(float);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4DA4B20", Offset = "0x4DA4B20", VA = "0x4DA4B20")]
	public void SetLayerWeight(int layerIndex, float weight)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4DA4C10", Offset = "0x4DA4C10", VA = "0x4DA4C10")]
	private void GetAnimatorStateInfo(int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4DA4D10", Offset = "0x4DA4D10", VA = "0x4DA4D10")]
	public AnimatorStateInfo GetCurrentAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4DA4DF0", Offset = "0x4DA4DF0", VA = "0x4DA4DF0")]
	public AnimatorStateInfo GetNextAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4DA4EE0", Offset = "0x4DA4EE0", VA = "0x4DA4EE0")]
	private void GetAnimatorTransitionInfo(int layerIndex, out AnimatorTransitionInfo info)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4DA4FD0", Offset = "0x4DA4FD0", VA = "0x4DA4FD0")]
	public AnimatorTransitionInfo GetAnimatorTransitionInfo(int layerIndex)
	{
		return default(AnimatorTransitionInfo);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4DA50A0", Offset = "0x4DA50A0", VA = "0x4DA50A0")]
	public bool IsInTransition(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4DA5350", Offset = "0x4DA5350", VA = "0x4DA5350")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4DA5460", Offset = "0x4DA5460", VA = "0x4DA5460")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4DA5470", Offset = "0x4DA5470", VA = "0x4DA5470")]
	public void CrossFade(string stateName, float normalizedTransitionDuration)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4DA5360", Offset = "0x4DA5360", VA = "0x4DA5360")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4DA5490", Offset = "0x4DA5490", VA = "0x4DA5490")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::CrossFade", HasExplicitThis = true)]
	public void CrossFade(int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4DA55E0", Offset = "0x4DA55E0", VA = "0x4DA55E0")]
	public void Play(string stateName, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4DA56D0", Offset = "0x4DA56D0", VA = "0x4DA56D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::Play", HasExplicitThis = true)]
	public void Play(int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4DA3AA0", Offset = "0x4DA3AA0", VA = "0x4DA3AA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ScriptingStringToCRC32", IsThreadSafe = true)]
	public static extern int StringToHash(string name);

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4DA5B10", Offset = "0x4DA5B10", VA = "0x4DA5B10")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetCurrentGraph", HasExplicitThis = true)]
	private void GetCurrentGraph(ref PlayableGraph graph)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4DA3E10", Offset = "0x4DA3E10", VA = "0x4DA3E10")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetFloatString", HasExplicitThis = true)]
	private void SetFloatString(string name, float value)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4DA3CB0", Offset = "0x4DA3CB0", VA = "0x4DA3CB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetFloatString", HasExplicitThis = true)]
	private float GetFloatString(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4DA40C0", Offset = "0x4DA40C0", VA = "0x4DA40C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetBoolString", HasExplicitThis = true)]
	private void SetBoolString(string name, bool value)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4DA3F70", Offset = "0x4DA3F70", VA = "0x4DA3F70")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetBoolString", HasExplicitThis = true)]
	private bool GetBoolString(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4DA4360", Offset = "0x4DA4360", VA = "0x4DA4360")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetIntegerString", HasExplicitThis = true)]
	private void SetIntegerString(string name, int value)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4DA4210", Offset = "0x4DA4210", VA = "0x4DA4210")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetIntegerString", HasExplicitThis = true)]
	private int GetIntegerString(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4DA44B0", Offset = "0x4DA44B0", VA = "0x4DA44B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetTriggerString", HasExplicitThis = true)]
	private void SetTriggerString(string name)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4DA45F0", Offset = "0x4DA45F0", VA = "0x4DA45F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::ResetTriggerString", HasExplicitThis = true)]
	private void ResetTriggerString(string name)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4DA5E00", Offset = "0x4DA5E00", VA = "0x4DA5E00")]
	[UnityEngine.Bindings.NativeMethod("UpdateWithDelta")]
	public void Update(float deltaTime)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4DA5F00", Offset = "0x4DA5F00", VA = "0x4DA5F00")]
	public void ApplyBuiltinRootMotion()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4DA3BE0", Offset = "0x4DA3BE0", VA = "0x4DA3BE0")]
	private static extern bool get_hasRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4DA4750", Offset = "0x4DA4750", VA = "0x4DA4750")]
	private static extern void get_deltaPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4DA4850", Offset = "0x4DA4850", VA = "0x4DA4850")]
	private static extern void get_deltaRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4DA4930", Offset = "0x4DA4930", VA = "0x4DA4930")]
	private static extern bool get_applyRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4DA4A00", Offset = "0x4DA4A00", VA = "0x4DA4A00")]
	private static extern void set_applyRootMotion_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4DA4AE0", Offset = "0x4DA4AE0", VA = "0x4DA4AE0")]
	private static extern float GetLayerWeight_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4DA4BD0", Offset = "0x4DA4BD0", VA = "0x4DA4BD0")]
	private static extern void SetLayerWeight_Injected(IntPtr _unity_self, int layerIndex, float weight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4DA4CC0", Offset = "0x4DA4CC0", VA = "0x4DA4CC0")]
	private static extern void GetAnimatorStateInfo_Injected(IntPtr _unity_self, int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4DA4F90", Offset = "0x4DA4F90", VA = "0x4DA4F90")]
	private static extern void GetAnimatorTransitionInfo_Injected(IntPtr _unity_self, int layerIndex, out AnimatorTransitionInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4DA5140", Offset = "0x4DA5140", VA = "0x4DA5140")]
	private static extern bool IsInTransition_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4DA5220", Offset = "0x4DA5220", VA = "0x4DA5220")]
	private static extern float get_speed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4DA5300", Offset = "0x4DA5300", VA = "0x4DA5300")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4DA5570", Offset = "0x4DA5570", VA = "0x4DA5570")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4DA5790", Offset = "0x4DA5790", VA = "0x4DA5790")]
	private static extern void Play_Injected(IntPtr _unity_self, int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4DA5880", Offset = "0x4DA5880", VA = "0x4DA5880")]
	private static extern void set_cullingMode_Injected(IntPtr _unity_self, AnimatorCullingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4DA5960", Offset = "0x4DA5960", VA = "0x4DA5960")]
	private static extern RuntimeAnimatorController get_runtimeAnimatorController_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4DA5A30", Offset = "0x4DA5A30", VA = "0x4DA5A30")]
	private static extern bool get_hasBoundPlayables_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4DA5BB0", Offset = "0x4DA5BB0", VA = "0x4DA5BB0")]
	private static extern void GetCurrentGraph_Injected(IntPtr _unity_self, ref PlayableGraph graph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4DA5BF0", Offset = "0x4DA5BF0", VA = "0x4DA5BF0")]
	private static extern void SetFloatString_Injected(IntPtr _unity_self, string name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4DA5C40", Offset = "0x4DA5C40", VA = "0x4DA5C40")]
	private static extern float GetFloatString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4DA5C80", Offset = "0x4DA5C80", VA = "0x4DA5C80")]
	private static extern void SetBoolString_Injected(IntPtr _unity_self, string name, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4DA5CC0", Offset = "0x4DA5CC0", VA = "0x4DA5CC0")]
	private static extern bool GetBoolString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4DA5D00", Offset = "0x4DA5D00", VA = "0x4DA5D00")]
	private static extern void SetIntegerString_Injected(IntPtr _unity_self, string name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4DA5D40", Offset = "0x4DA5D40", VA = "0x4DA5D40")]
	private static extern int GetIntegerString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4DA5D80", Offset = "0x4DA5D80", VA = "0x4DA5D80")]
	private static extern void SetTriggerString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4DA5DC0", Offset = "0x4DA5DC0", VA = "0x4DA5DC0")]
	private static extern void ResetTriggerString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4DA5EB0", Offset = "0x4DA5EB0", VA = "0x4DA5EB0")]
	private static extern void Update_Injected(IntPtr _unity_self, float deltaTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4DA5FA0", Offset = "0x4DA5FA0", VA = "0x4DA5FA0")]
	private static extern void ApplyBuiltinRootMotion_Injected(IntPtr _unity_self);
}
