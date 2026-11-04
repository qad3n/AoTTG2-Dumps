// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001E0")]
internal sealed class AottgSubtabStripRuntime : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IPointerMoveHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler
{
	[Token(Token = "0x20001E1")]
	[CompilerGenerated]
	private sealed class _003CAnimateHover_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A2B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A2C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A2D")]
		[FieldOffset(Offset = "0x20")]
		public AottgSubtabStripRuntime _003C_003E4__this;

		[Token(Token = "0x4000A2E")]
		[FieldOffset(Offset = "0x28")]
		public float target;

		[Token(Token = "0x4000A2F")]
		[FieldOffset(Offset = "0x2C")]
		public bool clearAfter;

		[Token(Token = "0x4000A30")]
		[FieldOffset(Offset = "0x30")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x4000A31")]
		[FieldOffset(Offset = "0x34")]
		private float _003Celapsed_003E5__3;

		[Token(Token = "0x1700014D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B13")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B15")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CAnimateHover_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x23B93A0", Offset = "0x23B79A0", VA = "0x1823B93A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x23B9510", Offset = "0x23B7B10", VA = "0x1823B9510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E2")]
	[CompilerGenerated]
	private sealed class _003CRefreshGeometryNextFrame_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A32")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A33")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A34")]
		[FieldOffset(Offset = "0x20")]
		public AottgSubtabStripRuntime _003C_003E4__this;

		[Token(Token = "0x1700014F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B19")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000150")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B1B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRefreshGeometryNextFrame_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B17")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x23B96A0", Offset = "0x23B7CA0", VA = "0x1823B96A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x23B9740", Offset = "0x23B7D40", VA = "0x1823B9740", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A1A")]
	private const string UnderlineName = "AoTTG Subtab Underline";

	[Token(Token = "0x4000A1B")]
	private const float UnderlineHeight = 3f;

	[Token(Token = "0x4000A1C")]
	private const float UnderlineOffset = 3f;

	[Token(Token = "0x4000A1D")]
	private const float HoverDuration = 0.08f;

	[Token(Token = "0x4000A1E")]
	private const float PressScale = 0.96f;

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000A21")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000A22")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _underline;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x50")]
	private Color _inactiveColor;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x60")]
	private string _hoveredId;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x68")]
	private string _pressedId;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0x70")]
	private float _hoverAmount;

	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0x78")]
	private Coroutine _hoverTween;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0x80")]
	private Coroutine _geometryRefresh;

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x23B84C0", Offset = "0x23B6AC0", VA = "0x1823B84C0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x23B71D0", Offset = "0x23B57D0", VA = "0x1823B71D0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x23B86C0", Offset = "0x23B6CC0", VA = "0x1823B86C0")]
	private void Setup(GisketchNodeDefinition node, IGisketchActionHandler actions, TextMeshProUGUI text, RectTransform underline, Color activeColor, Color inactiveColor)
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x23B7F50", Offset = "0x23B6550", VA = "0x1823B7F50", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x23B7EF0", Offset = "0x23B64F0", VA = "0x1823B7EF0", Slot = "6")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x23B7E90", Offset = "0x23B6490", VA = "0x1823B7E90", Slot = "7")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x23B7F80", Offset = "0x23B6580", VA = "0x1823B7F80", Slot = "8")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x23B7E10", Offset = "0x23B6410", VA = "0x1823B7E10", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x23B7C60", Offset = "0x23B6260", VA = "0x1823B7C60")]
	private string LinkAt(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x23B85C0", Offset = "0x23B6BC0", VA = "0x1823B85C0")]
	private void SetHovered(string tabId)
	{
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x23B61D0", Offset = "0x23B47D0", VA = "0x1823B61D0")]
	[IteratorStateMachine(typeof(_003CAnimateHover_003Ed__27))]
	private IEnumerator AnimateHover(float target, bool clearAfter)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x23B8670", Offset = "0x23B6C70", VA = "0x1823B8670")]
	private void SetPressed(string tabId)
	{
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x23B69E0", Offset = "0x23B4FE0", VA = "0x1823B69E0")]
	private void ApplyMeshEffects()
	{
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x23B6260", Offset = "0x23B4860", VA = "0x1823B6260")]
	private void ApplyLinkColor(string tabId, Color color)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x23B6520", Offset = "0x23B4B20", VA = "0x1823B6520")]
	private void ApplyLinkScale(string tabId, float scale)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x23B8770", Offset = "0x23B6D70", VA = "0x1823B8770")]
	private bool TryFindLink(string tabId, out TMP_LinkInfo link)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x23B7FD0", Offset = "0x23B65D0", VA = "0x1823B7FD0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x23B7FE0", Offset = "0x23B65E0", VA = "0x1823B7FE0")]
	private void QueueGeometryRefresh()
	{
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x23B80D0", Offset = "0x23B66D0", VA = "0x1823B80D0")]
	[IteratorStateMachine(typeof(_003CRefreshGeometryNextFrame_003Ed__35))]
	private IEnumerator RefreshGeometryNextFrame()
	{
		return null;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x23B8140", Offset = "0x23B6740", VA = "0x1823B8140")]
	private void RefreshUnderline()
	{
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x23B6EC0", Offset = "0x23B54C0", VA = "0x1823B6EC0")]
	internal static string BuildMarkup(GisketchNodeDefinition node, Color active, Color inactive)
	{
		return null;
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x23B7990", Offset = "0x23B5F90", VA = "0x1823B7990")]
	internal static bool Dispatch(GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject source, string tabId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x23B7710", Offset = "0x23B5D10", VA = "0x1823B7710")]
	private static Image CreateUnderline(Transform parent, Color color)
	{
		return null;
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x23B7690", Offset = "0x23B5C90", VA = "0x1823B7690")]
	private static bool Contains(string[] values, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x23B7B90", Offset = "0x23B6190", VA = "0x1823B7B90")]
	private static string Labels(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x23B8750", Offset = "0x23B6D50", VA = "0x1823B8750")]
	private static float Smooth(float value)
	{
		return default(float);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgSubtabStripRuntime()
	{
	}
}
