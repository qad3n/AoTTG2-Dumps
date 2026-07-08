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
		[Address(RVA = "0x4A7C320", Offset = "0x4A7C320", VA = "0x4A7C320")]
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
		[Address(RVA = "0x4A7CE70", Offset = "0x4A7CE70", VA = "0x4A7CE70")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000013")]
	public Quaternion deltaRotation
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4A7CF70", Offset = "0x4A7CF70", VA = "0x4A7CF70")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x17000014")]
	public bool applyRootMotion
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x4A7D070", Offset = "0x4A7D070", VA = "0x4A7D070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4A7D140", Offset = "0x4A7D140", VA = "0x4A7D140")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public float speed
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4A7D960", Offset = "0x4A7D960", VA = "0x4A7D960")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4A7DA30", Offset = "0x4A7DA30", VA = "0x4A7DA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public AnimatorCullingMode cullingMode
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x4A7DFC0", Offset = "0x4A7DFC0", VA = "0x4A7DFC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public RuntimeAnimatorController runtimeAnimatorController
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4A7E0A0", Offset = "0x4A7E0A0", VA = "0x4A7E0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public bool hasBoundPlayables
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x4A7E170", Offset = "0x4A7E170", VA = "0x4A7E170")]
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
		[Address(RVA = "0x4A7E240", Offset = "0x4A7E240", VA = "0x4A7E240")]
		get
		{
			return default(PlayableGraph);
		}
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4A7C3F0", Offset = "0x4A7C3F0", VA = "0x4A7C3F0")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4A7C530", Offset = "0x4A7C530", VA = "0x4A7C530")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4A7C6B0", Offset = "0x4A7C6B0", VA = "0x4A7C6B0")]
	public bool GetBool(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4A7C7F0", Offset = "0x4A7C7F0", VA = "0x4A7C7F0")]
	public void SetBool(string name, bool value)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4A7C950", Offset = "0x4A7C950", VA = "0x4A7C950")]
	public int GetInteger(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4A7CA90", Offset = "0x4A7CA90", VA = "0x4A7CA90")]
	public void SetInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4A7CBF0", Offset = "0x4A7CBF0", VA = "0x4A7CBF0")]
	public void SetTrigger(string name)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4A7CD30", Offset = "0x4A7CD30", VA = "0x4A7CD30")]
	public void ResetTrigger(string name)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4A7D220", Offset = "0x4A7D220", VA = "0x4A7D220")]
	public float GetLayerWeight(int layerIndex)
	{
		return default(float);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4A7D300", Offset = "0x4A7D300", VA = "0x4A7D300")]
	public void SetLayerWeight(int layerIndex, float weight)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4A7D3F0", Offset = "0x4A7D3F0", VA = "0x4A7D3F0")]
	private void GetAnimatorStateInfo(int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4A7D4F0", Offset = "0x4A7D4F0", VA = "0x4A7D4F0")]
	public AnimatorStateInfo GetCurrentAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4A7D5D0", Offset = "0x4A7D5D0", VA = "0x4A7D5D0")]
	public AnimatorStateInfo GetNextAnimatorStateInfo(int layerIndex)
	{
		return default(AnimatorStateInfo);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4A7D6C0", Offset = "0x4A7D6C0", VA = "0x4A7D6C0")]
	private void GetAnimatorTransitionInfo(int layerIndex, out AnimatorTransitionInfo info)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4A7D7B0", Offset = "0x4A7D7B0", VA = "0x4A7D7B0")]
	public AnimatorTransitionInfo GetAnimatorTransitionInfo(int layerIndex)
	{
		return default(AnimatorTransitionInfo);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4A7D880", Offset = "0x4A7D880", VA = "0x4A7D880")]
	public bool IsInTransition(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4A7DB30", Offset = "0x4A7DB30", VA = "0x4A7DB30")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4A7DC40", Offset = "0x4A7DC40", VA = "0x4A7DC40")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4A7DC50", Offset = "0x4A7DC50", VA = "0x4A7DC50")]
	public void CrossFade(string stateName, float normalizedTransitionDuration)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4A7DB40", Offset = "0x4A7DB40", VA = "0x4A7DB40")]
	public void CrossFade(string stateName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4A7DC70", Offset = "0x4A7DC70", VA = "0x4A7DC70")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::CrossFade", HasExplicitThis = true)]
	public void CrossFade(int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4A7DDC0", Offset = "0x4A7DDC0", VA = "0x4A7DDC0")]
	public void Play(string stateName, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4A7DEB0", Offset = "0x4A7DEB0", VA = "0x4A7DEB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::Play", HasExplicitThis = true)]
	public void Play(int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4A7C280", Offset = "0x4A7C280", VA = "0x4A7C280")]
	[UnityEngine.Bindings.NativeMethod(Name = "ScriptingStringToCRC32", IsThreadSafe = true)]
	public static extern int StringToHash(string name);

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4A7E2F0", Offset = "0x4A7E2F0", VA = "0x4A7E2F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetCurrentGraph", HasExplicitThis = true)]
	private void GetCurrentGraph(ref PlayableGraph graph)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4A7C5F0", Offset = "0x4A7C5F0", VA = "0x4A7C5F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetFloatString", HasExplicitThis = true)]
	private void SetFloatString(string name, float value)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4A7C490", Offset = "0x4A7C490", VA = "0x4A7C490")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetFloatString", HasExplicitThis = true)]
	private float GetFloatString(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4A7C8A0", Offset = "0x4A7C8A0", VA = "0x4A7C8A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetBoolString", HasExplicitThis = true)]
	private void SetBoolString(string name, bool value)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4A7C750", Offset = "0x4A7C750", VA = "0x4A7C750")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetBoolString", HasExplicitThis = true)]
	private bool GetBoolString(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4A7CB40", Offset = "0x4A7CB40", VA = "0x4A7CB40")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetIntegerString", HasExplicitThis = true)]
	private void SetIntegerString(string name, int value)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4A7C9F0", Offset = "0x4A7C9F0", VA = "0x4A7C9F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::GetIntegerString", HasExplicitThis = true)]
	private int GetIntegerString(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4A7CC90", Offset = "0x4A7CC90", VA = "0x4A7CC90")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::SetTriggerString", HasExplicitThis = true)]
	private void SetTriggerString(string name)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4A7CDD0", Offset = "0x4A7CDD0", VA = "0x4A7CDD0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimatorBindings::ResetTriggerString", HasExplicitThis = true)]
	private void ResetTriggerString(string name)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4A7E5E0", Offset = "0x4A7E5E0", VA = "0x4A7E5E0")]
	[UnityEngine.Bindings.NativeMethod("UpdateWithDelta")]
	public void Update(float deltaTime)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4A7E6E0", Offset = "0x4A7E6E0", VA = "0x4A7E6E0")]
	public void ApplyBuiltinRootMotion()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4A7C3C0", Offset = "0x4A7C3C0", VA = "0x4A7C3C0")]
	private static extern bool get_hasRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4A7CF30", Offset = "0x4A7CF30", VA = "0x4A7CF30")]
	private static extern void get_deltaPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4A7D030", Offset = "0x4A7D030", VA = "0x4A7D030")]
	private static extern void get_deltaRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4A7D110", Offset = "0x4A7D110", VA = "0x4A7D110")]
	private static extern bool get_applyRootMotion_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4A7D1E0", Offset = "0x4A7D1E0", VA = "0x4A7D1E0")]
	private static extern void set_applyRootMotion_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4A7D2C0", Offset = "0x4A7D2C0", VA = "0x4A7D2C0")]
	private static extern float GetLayerWeight_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4A7D3B0", Offset = "0x4A7D3B0", VA = "0x4A7D3B0")]
	private static extern void SetLayerWeight_Injected(IntPtr _unity_self, int layerIndex, float weight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4A7D4A0", Offset = "0x4A7D4A0", VA = "0x4A7D4A0")]
	private static extern void GetAnimatorStateInfo_Injected(IntPtr _unity_self, int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4A7D770", Offset = "0x4A7D770", VA = "0x4A7D770")]
	private static extern void GetAnimatorTransitionInfo_Injected(IntPtr _unity_self, int layerIndex, out AnimatorTransitionInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4A7D920", Offset = "0x4A7D920", VA = "0x4A7D920")]
	private static extern bool IsInTransition_Injected(IntPtr _unity_self, int layerIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4A7DA00", Offset = "0x4A7DA00", VA = "0x4A7DA00")]
	private static extern float get_speed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4A7DAE0", Offset = "0x4A7DAE0", VA = "0x4A7DAE0")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4A7DD50", Offset = "0x4A7DD50", VA = "0x4A7DD50")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, int stateHashName, float normalizedTransitionDuration, [DefaultValue("-1")] int layer, [DefaultValue("0.0f")] float normalizedTimeOffset, [DefaultValue("0.0f")] float normalizedTransitionTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4A7DF70", Offset = "0x4A7DF70", VA = "0x4A7DF70")]
	private static extern void Play_Injected(IntPtr _unity_self, int stateNameHash, [DefaultValue("-1")] int layer, [DefaultValue("float.NegativeInfinity")] float normalizedTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4A7E060", Offset = "0x4A7E060", VA = "0x4A7E060")]
	private static extern void set_cullingMode_Injected(IntPtr _unity_self, AnimatorCullingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4A7E140", Offset = "0x4A7E140", VA = "0x4A7E140")]
	private static extern RuntimeAnimatorController get_runtimeAnimatorController_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4A7E210", Offset = "0x4A7E210", VA = "0x4A7E210")]
	private static extern bool get_hasBoundPlayables_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4A7E390", Offset = "0x4A7E390", VA = "0x4A7E390")]
	private static extern void GetCurrentGraph_Injected(IntPtr _unity_self, ref PlayableGraph graph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4A7E3D0", Offset = "0x4A7E3D0", VA = "0x4A7E3D0")]
	private static extern void SetFloatString_Injected(IntPtr _unity_self, string name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4A7E420", Offset = "0x4A7E420", VA = "0x4A7E420")]
	private static extern float GetFloatString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4A7E460", Offset = "0x4A7E460", VA = "0x4A7E460")]
	private static extern void SetBoolString_Injected(IntPtr _unity_self, string name, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4A7E4A0", Offset = "0x4A7E4A0", VA = "0x4A7E4A0")]
	private static extern bool GetBoolString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4A7E4E0", Offset = "0x4A7E4E0", VA = "0x4A7E4E0")]
	private static extern void SetIntegerString_Injected(IntPtr _unity_self, string name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4A7E520", Offset = "0x4A7E520", VA = "0x4A7E520")]
	private static extern int GetIntegerString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4A7E560", Offset = "0x4A7E560", VA = "0x4A7E560")]
	private static extern void SetTriggerString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4A7E5A0", Offset = "0x4A7E5A0", VA = "0x4A7E5A0")]
	private static extern void ResetTriggerString_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4A7E690", Offset = "0x4A7E690", VA = "0x4A7E690")]
	private static extern void Update_Injected(IntPtr _unity_self, float deltaTime);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4A7E780", Offset = "0x4A7E780", VA = "0x4A7E780")]
	private static extern void ApplyBuiltinRootMotion_Injected(IntPtr _unity_self);
}
