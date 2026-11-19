// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001FA")]
internal sealed class AottgSubtabStripRuntime : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IPointerMoveHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler
{
	[Token(Token = "0x20001FB")]
	[CompilerGenerated]
	private sealed class _003CAnimateHover_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AA4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AA5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AA6")]
		[FieldOffset(Offset = "0x20")]
		public AottgSubtabStripRuntime _003C_003E4__this;

		[Token(Token = "0x4000AA7")]
		[FieldOffset(Offset = "0x28")]
		public float target;

		[Token(Token = "0x4000AA8")]
		[FieldOffset(Offset = "0x2C")]
		public bool clearAfter;

		[Token(Token = "0x4000AA9")]
		[FieldOffset(Offset = "0x30")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x4000AAA")]
		[FieldOffset(Offset = "0x34")]
		private float _003Celapsed_003E5__3;

		[Token(Token = "0x17000156")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BD7")]
			[Address(RVA = "0x5D7FD70", Offset = "0x5D7ED70", VA = "0x5D7FD70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000157")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BD9")]
			[Address(RVA = "0x5D7FDC0", Offset = "0x5D7EDC0", VA = "0x5D7FDC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x5D7F1E0", Offset = "0x5D7E1E0", VA = "0x5D7F1E0")]
		[DebuggerHidden]
		public _003CAnimateHover_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x5D7FBF0", Offset = "0x5D7EBF0", VA = "0x5D7FBF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x5D7FC00", Offset = "0x5D7EC00", VA = "0x5D7FC00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x5D7FD80", Offset = "0x5D7ED80", VA = "0x5D7FD80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001FC")]
	[CompilerGenerated]
	private sealed class _003CRefreshGeometryNextFrame_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AAB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AAC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AAD")]
		[FieldOffset(Offset = "0x20")]
		public AottgSubtabStripRuntime _003C_003E4__this;

		[Token(Token = "0x17000158")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BDD")]
			[Address(RVA = "0x5D7FE60", Offset = "0x5D7EE60", VA = "0x5D7FE60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000159")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BDF")]
			[Address(RVA = "0x5D7FEB0", Offset = "0x5D7EEB0", VA = "0x5D7FEB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x5D7F900", Offset = "0x5D7E900", VA = "0x5D7F900")]
		[DebuggerHidden]
		public _003CRefreshGeometryNextFrame_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BDB")]
		[Address(RVA = "0x5D7FDD0", Offset = "0x5D7EDD0", VA = "0x5D7FDD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x5D7FDE0", Offset = "0x5D7EDE0", VA = "0x5D7FDE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x5D7FE70", Offset = "0x5D7EE70", VA = "0x5D7FE70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A92")]
	private const string UnderlineName = "AoTTG Subtab Underline";

	[Token(Token = "0x4000A93")]
	private const float UnderlineHeight = 3f;

	[Token(Token = "0x4000A94")]
	private const float UnderlineOffset = 3f;

	[Token(Token = "0x4000A95")]
	private const float HoverDuration = 0.08f;

	[Token(Token = "0x4000A96")]
	private const float PressScale = 0.96f;

	[Token(Token = "0x4000A97")]
	private const float MinFontScale = 0.6f;

	[Token(Token = "0x4000A98")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000A99")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _underline;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x50")]
	private Color _inactiveColor;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x60")]
	private string _hoveredId;

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x68")]
	private string _pressedId;

	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x70")]
	private float _hoverAmount;

	[Token(Token = "0x4000AA2")]
	[FieldOffset(Offset = "0x78")]
	private Coroutine _hoverTween;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x80")]
	private Coroutine _geometryRefresh;

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x5D7D970", Offset = "0x5D7C970", VA = "0x5D7D970")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x5D7DE90", Offset = "0x5D7CE90", VA = "0x5D7DE90")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x5D7E950", Offset = "0x5D7D950", VA = "0x5D7E950")]
	private void Setup(GisketchNodeDefinition node, IGisketchActionHandler actions, TextMeshProUGUI text, RectTransform underline, Color activeColor, Color inactiveColor)
	{
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x5D7EAE0", Offset = "0x5D7DAE0", VA = "0x5D7EAE0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x5D7EDA0", Offset = "0x5D7DDA0", VA = "0x5D7EDA0", Slot = "6")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x5D7EE30", Offset = "0x5D7DE30", VA = "0x5D7EE30", Slot = "7")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x5D7EE80", Offset = "0x5D7DE80", VA = "0x5D7EE80", Slot = "8")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x5D7EEC0", Offset = "0x5D7DEC0", VA = "0x5D7EEC0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x5D7EB00", Offset = "0x5D7DB00", VA = "0x5D7EB00")]
	private string LinkAt(PointerEventData eventData)
	{
		return null;
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x5D7EC70", Offset = "0x5D7DC70", VA = "0x5D7EC70")]
	private void SetHovered(string tabId)
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x5D7F160", Offset = "0x5D7E160", VA = "0x5D7F160")]
	[IteratorStateMachine(typeof(_003CAnimateHover_003Ed__28))]
	private IEnumerator AnimateHover(float target, bool clearAfter)
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x5D7EDE0", Offset = "0x5D7DDE0", VA = "0x5D7EDE0")]
	private void SetPressed(string tabId)
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x5D7F200", Offset = "0x5D7E200", VA = "0x5D7F200")]
	private void ApplyMeshEffects()
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x5D7F340", Offset = "0x5D7E340", VA = "0x5D7F340")]
	private void ApplyLinkColor(string tabId, Color color)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x5D7F4B0", Offset = "0x5D7E4B0", VA = "0x5D7F4B0")]
	private void ApplyLinkScale(string tabId, float scale)
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x5D7F730", Offset = "0x5D7E730", VA = "0x5D7F730")]
	private bool TryFindLink(string tabId, out TMP_LinkInfo link)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x5D7F880", Offset = "0x5D7E880", VA = "0x5D7F880")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x5D7E9F0", Offset = "0x5D7D9F0", VA = "0x5D7E9F0")]
	private void QueueGeometryRefresh()
	{
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x5D7F890", Offset = "0x5D7E890", VA = "0x5D7F890")]
	[IteratorStateMachine(typeof(_003CRefreshGeometryNextFrame_003Ed__36))]
	private IEnumerator RefreshGeometryNextFrame()
	{
		return null;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x5D7F920", Offset = "0x5D7E920", VA = "0x5D7F920")]
	private void RefreshUnderline()
	{
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x5D7E350", Offset = "0x5D7D350", VA = "0x5D7E350")]
	internal static string BuildMarkup(GisketchNodeDefinition node, Color active, Color inactive)
	{
		return null;
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x5D7EF20", Offset = "0x5D7DF20", VA = "0x5D7EF20")]
	internal static bool Dispatch(GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject source, string tabId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x5D7E6D0", Offset = "0x5D7D6D0", VA = "0x5D7E6D0")]
	private static Image CreateUnderline(Transform parent, Color color)
	{
		return null;
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x5D7F0F0", Offset = "0x5D7E0F0", VA = "0x5D7F0F0")]
	private static bool Contains(string[] values, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x5D7E260", Offset = "0x5D7D260", VA = "0x5D7E260")]
	private static string Labels(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x5D7FBC0", Offset = "0x5D7EBC0", VA = "0x5D7FBC0")]
	private static float Smooth(float value)
	{
		return default(float);
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x5D7FBE0", Offset = "0x5D7EBE0", VA = "0x5D7FBE0")]
	public AottgSubtabStripRuntime()
	{
	}
}
