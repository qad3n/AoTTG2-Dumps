// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Panel
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002BD")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
internal class Panel : BaseVisualElementPanel
{
	[Token(Token = "0x4000A7D")]
	internal const int k_DefaultPixelsPerUnit = 100;

	[Token(Token = "0x4000A7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private VisualElement m_RootContainer;

	[Token(Token = "0x4000A7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private VisualTreeUpdater m_VisualTreeUpdater;

	[Token(Token = "0x4000A80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private IStylePropertyAnimationSystem m_StylePropertyAnimationSystem;

	[Token(Token = "0x4000A81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private string m_PanelName;

	[Token(Token = "0x4000A82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private uint m_Version;

	[Token(Token = "0x4000A83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private uint m_RepaintVersion;

	[Token(Token = "0x4000A84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private uint m_HierarchyVersion;

	[Token(Token = "0x4000A85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	private uint m_LastTickedHierarchyVersion;

	[Token(Token = "0x4000A86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private ProfilerMarker m_MarkerPrepareRepaint;

	[Token(Token = "0x4000A87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private ProfilerMarker m_MarkerRender;

	[Token(Token = "0x4000A88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private ProfilerMarker m_MarkerValidateLayout;

	[Token(Token = "0x4000A89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private ProfilerMarker m_MarkerTickScheduledActions;

	[Token(Token = "0x4000A8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	protected ProfilerMarker m_MarkerTickScheduledActionsPreLayout;

	[Token(Token = "0x4000A8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	protected ProfilerMarker m_MarkerTickScheduledActionsPostLayout;

	[Token(Token = "0x4000A8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private ProfilerMarker m_MarkerPanelChangeReceiver;

	[Token(Token = "0x4000A8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerPickAll;

	[Token(Token = "0x4000A96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1AB")]
	private bool m_JustReceivedFocus;

	[Token(Token = "0x4000A97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private IDebugPanelChangeReceiver m_PanelChangeReceiver;

	[Token(Token = "0x4000A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private AtlasBase m_Atlas;

	[Token(Token = "0x4000A9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private bool m_ValidatingLayout;

	[Token(Token = "0x4000A9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<Panel> beforeAnyRepaint;

	[Token(Token = "0x170003B7")]
	public sealed override VisualElement visualTree
	{
		[Token(Token = "0x600125E")]
		[Address(RVA = "0x1CCD810", Offset = "0x1CCBE10", VA = "0x181CCD810", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B8")]
	public sealed override EventDispatcher dispatcher
	{
		[Token(Token = "0x600125F")]
		[Address(RVA = "0x2CF3CF0", Offset = "0x2CF22F0", VA = "0x182CF3CF0", Slot = "46")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001260")]
		[Address(RVA = "0x26ABCB0", Offset = "0x26AA2B0", VA = "0x1826ABCB0", Slot = "47")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003B9")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal override IStylePropertyAnimationSystem styleAnimationSystem
	{
		[Token(Token = "0x6001261")]
		[Address(RVA = "0xA2F260", Offset = "0xA2D860", VA = "0x180A2F260", Slot = "48")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001262")]
		[Address(RVA = "0x32B4190", Offset = "0x32B2790", VA = "0x1832B4190", Slot = "49")]
		set
		{
		}
	}

	[Token(Token = "0x170003BA")]
	public override ScriptableObject ownerObject
	{
		[Token(Token = "0x6001263")]
		[Address(RVA = "0x2BFBE80", Offset = "0x2BFA480", VA = "0x182BFBE80", Slot = "15")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001264")]
		[Address(RVA = "0x3012990", Offset = "0x3010F90", VA = "0x183012990", Slot = "16")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170003BB")]
	public override ContextType contextType
	{
		[Token(Token = "0x6001265")]
		[Address(RVA = "0x2D07410", Offset = "0x2D05A10", VA = "0x182D07410", Slot = "50")]
		[CompilerGenerated]
		get
		{
			return default(ContextType);
		}
	}

	[Token(Token = "0x170003BC")]
	public override SavePersistentViewData saveViewData
	{
		[Token(Token = "0x6001266")]
		[Address(RVA = "0x2CF3D10", Offset = "0x2CF2310", VA = "0x182CF3D10", Slot = "17")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BD")]
	public override GetViewDataDictionary getViewDataDictionary
	{
		[Token(Token = "0x6001267")]
		[Address(RVA = "0x32B3F90", Offset = "0x32B2590", VA = "0x1832B3F90", Slot = "18")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BE")]
	public sealed override FocusController focusController
	{
		[Token(Token = "0x6001268")]
		[Address(RVA = "0x2D07800", Offset = "0x2D05E00", VA = "0x182D07800", Slot = "21")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001269")]
		[Address(RVA = "0x3012970", Offset = "0x3010F70", VA = "0x183012970", Slot = "22")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003BF")]
	public override UnityEngine.EventInterests IMGUIEventInterests
	{
		[Token(Token = "0x600126A")]
		[Address(RVA = "0x32B3F10", Offset = "0x32B2510", VA = "0x1832B3F10", Slot = "13")]
		[CompilerGenerated]
		get
		{
			return default(UnityEngine.EventInterests);
		}
		[Token(Token = "0x600126B")]
		[Address(RVA = "0x32B4010", Offset = "0x32B2610", VA = "0x1832B4010", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003C0")]
	private static LoadResourceFunction loadResourceFunc
	{
		[Token(Token = "0x600126C")]
		[Address(RVA = "0x32B3FA0", Offset = "0x32B25A0", VA = "0x1832B3FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C1")]
	internal string name
	{
		[Token(Token = "0x6001271")]
		[Address(RVA = "0x32B3FF0", Offset = "0x32B25F0", VA = "0x1832B3FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001272")]
		[Address(RVA = "0x32B40B0", Offset = "0x32B26B0", VA = "0x1832B40B0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C2")]
	public IDebugPanelChangeReceiver panelChangeReceiver
	{
		[Token(Token = "0x6001273")]
		[Address(RVA = "0x2D07820", Offset = "0x2D05E20", VA = "0x182D07820")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001274")]
		[Address(RVA = "0x32B40E0", Offset = "0x32B26E0", VA = "0x1832B40E0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C3")]
	[Obsolete("Use the non-static TimeSinceStartupFunc instead")]
	internal static TimeMsFunction TimeSinceStartup
	{
		[Token(Token = "0x6001276")]
		[Address(RVA = "0x32B3F30", Offset = "0x32B2530", VA = "0x1832B3F30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C4")]
	public override int IMGUIContainersCount
	{
		[Token(Token = "0x6001277")]
		[Address(RVA = "0x32B3F00", Offset = "0x32B2500", VA = "0x1832B3F00", Slot = "19")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001278")]
		[Address(RVA = "0x32B4000", Offset = "0x32B2600", VA = "0x1832B4000", Slot = "20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003C5")]
	public override IMGUIContainer rootIMGUIContainer
	{
		[Token(Token = "0x6001279")]
		[Address(RVA = "0x2D07830", Offset = "0x2D05E30", VA = "0x182D07830", Slot = "23")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C6")]
	internal override uint version
	{
		[Token(Token = "0x600127A")]
		[Address(RVA = "0x2CE6A30", Offset = "0x2CE5030", VA = "0x182CE6A30", Slot = "33")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003C7")]
	internal override uint repaintVersion
	{
		[Token(Token = "0x600127B")]
		[Address(RVA = "0x27E5560", Offset = "0x27E3B60", VA = "0x1827E5560", Slot = "34")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003C8")]
	internal override uint hierarchyVersion
	{
		[Token(Token = "0x600127C")]
		[Address(RVA = "0x27E5880", Offset = "0x27E3E80", VA = "0x1827E5880", Slot = "35")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003C9")]
	public override AtlasBase atlas
	{
		[Token(Token = "0x600127D")]
		[Address(RVA = "0x32B3F80", Offset = "0x32B2580", VA = "0x1832B3F80", Slot = "55")]
		get
		{
			return null;
		}
		[Token(Token = "0x600127E")]
		[Address(RVA = "0x32B4030", Offset = "0x32B2630", VA = "0x1832B4030", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x32B28E0", Offset = "0x32B0EE0", VA = "0x1832B28E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static Object LoadResource(string pathName, Type type, float dpiScaling)
	{
		return null;
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x32B28A0", Offset = "0x32B0EA0", VA = "0x1832B28A0")]
	internal void Focus()
	{
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x32B2400", Offset = "0x32B0A00", VA = "0x1832B2400")]
	internal void Blur()
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x32B3930", Offset = "0x32B1F30", VA = "0x1832B3930")]
	public void ValidateFocus()
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x32B2430", Offset = "0x32B0A30", VA = "0x1832B2430")]
	private void CreateMarkers()
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x32B3AE0", Offset = "0x32B20E0", VA = "0x1832B3AE0")]
	public Panel(ScriptableObject ownerObject, ContextType contextType, EventDispatcher dispatcher)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x32B2640", Offset = "0x32B0C40", VA = "0x1832B2640", Slot = "24")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x32B3030", Offset = "0x32B1630", VA = "0x1832B3030")]
	internal static VisualElement PickAll(VisualElement root, Vector2 point, [Optional] List<VisualElement> picked, bool includeIgnoredElement = false)
	{
		return null;
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x32B2BB0", Offset = "0x32B11B0", VA = "0x1832B2BB0")]
	private static VisualElement PerformPick(VisualElement root, Vector2 point, [Optional] List<VisualElement> picked, bool includeIgnoredElement = false)
	{
		return null;
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x32B2F50", Offset = "0x32B1550", VA = "0x1832B2F50", Slot = "53")]
	public override VisualElement PickAll(Vector2 point, List<VisualElement> picked)
	{
		return null;
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x32B30C0", Offset = "0x32B16C0", VA = "0x1832B30C0", Slot = "52")]
	public override VisualElement Pick(Vector2 point, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x32B3970", Offset = "0x32B1F70", VA = "0x1832B3970", Slot = "26")]
	public override void ValidateLayout()
	{
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x32B37B0", Offset = "0x32B1DB0", VA = "0x1832B37B0", Slot = "29")]
	public override void UpdateAnimations()
	{
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x32B37E0", Offset = "0x32B1DE0", VA = "0x1832B37E0", Slot = "30")]
	public override void UpdateBindings()
	{
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x32B3810", Offset = "0x32B1E10", VA = "0x1832B3810", Slot = "31")]
	public override void UpdateDataBinding()
	{
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x32B34A0", Offset = "0x32B1AA0", VA = "0x1832B34A0", Slot = "27")]
	public override void TickSchedulingUpdaters()
	{
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x32B23D0", Offset = "0x32B09D0", VA = "0x1832B23D0", Slot = "32")]
	public override void ApplyStyles()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x32B3840", Offset = "0x32B1E40", VA = "0x1832B3840", Slot = "28")]
	public override void UpdateForRepaint()
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x32B32C0", Offset = "0x32B18C0", VA = "0x1832B32C0", Slot = "25")]
	public override void Repaint(Event e)
	{
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x32B3220", Offset = "0x32B1820", VA = "0x1832B3220", Slot = "57")]
	public override void Render()
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x32B2A20", Offset = "0x32B1020", VA = "0x1832B2A20", Slot = "36")]
	internal override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x32B3470", Offset = "0x32B1A70", VA = "0x1832B3470", Slot = "37")]
	internal override void SetUpdater(IVisualTreeUpdater updater, VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x32B28B0", Offset = "0x32B0EB0", VA = "0x1832B28B0", Slot = "54")]
	internal override IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase)
	{
		return null;
	}
}
