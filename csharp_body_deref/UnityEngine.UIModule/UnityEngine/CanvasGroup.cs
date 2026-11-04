// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CanvasGroup
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasGroup.h")]
[UnityEngine.UIModuleHelpURL("class-CanvasGroup")]
[UnityEngine.NativeClass("UI::CanvasGroup")]
public sealed class CanvasGroup : Behaviour, ICanvasRaycastFilter
{
	[Token(Token = "0x17000001")]
	[UnityEngine.Bindings.NativeProperty("Alpha", false, UnityEngine.Bindings.TargetType.Function)]
	public float alpha
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x32BCAE0", Offset = "0x32BB0E0", VA = "0x1832BCAE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x32BCD70", Offset = "0x32BB370", VA = "0x1832BCD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeProperty("Interactable", false, UnityEngine.Bindings.TargetType.Function)]
	public bool interactable
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x32BCCA0", Offset = "0x32BB2A0", VA = "0x1832BCCA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x32BD010", Offset = "0x32BB610", VA = "0x1832BD010")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("BlocksRaycasts", false, UnityEngine.Bindings.TargetType.Function)]
	public bool blocksRaycasts
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x32BCA20", Offset = "0x32BB020", VA = "0x1832BCA20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x32BCE50", Offset = "0x32BB450", VA = "0x1832BCE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("IgnoreParentGroups", false, UnityEngine.Bindings.TargetType.Function)]
	public bool ignoreParentGroups
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x32BCBE0", Offset = "0x32BB1E0", VA = "0x1832BCBE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x32BCF30", Offset = "0x32BB530", VA = "0x1832BCF30")]
		set
		{
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x32BCA20", Offset = "0x32BB020", VA = "0x1832BCA20", Slot = "4")]
	public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CanvasGroup()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x32BCAA0", Offset = "0x32BB0A0", VA = "0x1832BCAA0")]
	private static extern float get_alpha_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x32BCD20", Offset = "0x32BB320", VA = "0x1832BCD20")]
	private static extern void set_alpha_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x32BCC60", Offset = "0x32BB260", VA = "0x1832BCC60")]
	private static extern bool get_interactable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x32BCFC0", Offset = "0x32BB5C0", VA = "0x1832BCFC0")]
	private static extern void set_interactable_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x32BCB60", Offset = "0x32BB160", VA = "0x1832BCB60")]
	private static extern bool get_blocksRaycasts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000012")]
	[Address(RVA = "0x32BCE00", Offset = "0x32BB400", VA = "0x1832BCE00")]
	private static extern void set_blocksRaycasts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x32BCBA0", Offset = "0x32BB1A0", VA = "0x1832BCBA0")]
	private static extern bool get_ignoreParentGroups_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x32BCEE0", Offset = "0x32BB4E0", VA = "0x1832BCEE0")]
	private static extern void set_ignoreParentGroups_Injected(IntPtr _unity_self, bool value);
}
