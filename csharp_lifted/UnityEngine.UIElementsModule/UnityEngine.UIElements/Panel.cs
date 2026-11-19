// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Panel
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6CB5730", Offset = "0x6CB4730", VA = "0x6CB5730", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B8")]
	public sealed override EventDispatcher dispatcher
	{
		[Token(Token = "0x600125F")]
		[Address(RVA = "0x6CB5740", Offset = "0x6CB4740", VA = "0x6CB5740", Slot = "46")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001260")]
		[Address(RVA = "0x6CB5750", Offset = "0x6CB4750", VA = "0x6CB5750", Slot = "47")]
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
		[Address(RVA = "0x6CB5770", Offset = "0x6CB4770", VA = "0x6CB5770", Slot = "48")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001262")]
		[Address(RVA = "0x6CB5780", Offset = "0x6CB4780", VA = "0x6CB5780", Slot = "49")]
		set
		{
		}
	}

	[Token(Token = "0x170003BA")]
	public override ScriptableObject ownerObject
	{
		[Token(Token = "0x6001263")]
		[Address(RVA = "0x6CB58C0", Offset = "0x6CB48C0", VA = "0x6CB58C0", Slot = "15")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001264")]
		[Address(RVA = "0x6CB58D0", Offset = "0x6CB48D0", VA = "0x6CB58D0", Slot = "16")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170003BB")]
	public override ContextType contextType
	{
		[Token(Token = "0x6001265")]
		[Address(RVA = "0x6CB58F0", Offset = "0x6CB48F0", VA = "0x6CB58F0", Slot = "50")]
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
		[Address(RVA = "0x6CB5900", Offset = "0x6CB4900", VA = "0x6CB5900", Slot = "17")]
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
		[Address(RVA = "0x6CB5910", Offset = "0x6CB4910", VA = "0x6CB5910", Slot = "18")]
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
		[Address(RVA = "0x6CB5920", Offset = "0x6CB4920", VA = "0x6CB5920", Slot = "21")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001269")]
		[Address(RVA = "0x6CB5930", Offset = "0x6CB4930", VA = "0x6CB5930", Slot = "22")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003BF")]
	public override UnityEngine.EventInterests IMGUIEventInterests
	{
		[Token(Token = "0x600126A")]
		[Address(RVA = "0x6CB5950", Offset = "0x6CB4950", VA = "0x6CB5950", Slot = "13")]
		[CompilerGenerated]
		get
		{
			return default(UnityEngine.EventInterests);
		}
		[Token(Token = "0x600126B")]
		[Address(RVA = "0x6CB5970", Offset = "0x6CB4970", VA = "0x6CB5970", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003C0")]
	private static LoadResourceFunction loadResourceFunc
	{
		[Token(Token = "0x600126C")]
		[Address(RVA = "0x6CB5990", Offset = "0x6CB4990", VA = "0x6CB5990")]
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
		[Address(RVA = "0x6CB5C30", Offset = "0x6CB4C30", VA = "0x6CB5C30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001272")]
		[Address(RVA = "0x6CB5C40", Offset = "0x6CB4C40", VA = "0x6CB5C40")]
		set
		{
		}
	}

	[Token(Token = "0x170003C2")]
	public IDebugPanelChangeReceiver panelChangeReceiver
	{
		[Token(Token = "0x6001273")]
		[Address(RVA = "0x6CB5E50", Offset = "0x6CB4E50", VA = "0x6CB5E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001274")]
		[Address(RVA = "0x6CB5E60", Offset = "0x6CB4E60", VA = "0x6CB5E60")]
		set
		{
		}
	}

	[Token(Token = "0x170003C3")]
	[Obsolete("Use the non-static TimeSinceStartupFunc instead")]
	internal static TimeMsFunction TimeSinceStartup
	{
		[Token(Token = "0x6001276")]
		[Address(RVA = "0x6CB5F10", Offset = "0x6CB4F10", VA = "0x6CB5F10")]
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
		[Address(RVA = "0x6CB5F80", Offset = "0x6CB4F80", VA = "0x6CB5F80", Slot = "19")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001278")]
		[Address(RVA = "0x6CB5F90", Offset = "0x6CB4F90", VA = "0x6CB5F90", Slot = "20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003C5")]
	public override IMGUIContainer rootIMGUIContainer
	{
		[Token(Token = "0x6001279")]
		[Address(RVA = "0x6CB5FA0", Offset = "0x6CB4FA0", VA = "0x6CB5FA0", Slot = "23")]
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
		[Address(RVA = "0x6CB5FB0", Offset = "0x6CB4FB0", VA = "0x6CB5FB0", Slot = "33")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003C7")]
	internal override uint repaintVersion
	{
		[Token(Token = "0x600127B")]
		[Address(RVA = "0x6CB5FC0", Offset = "0x6CB4FC0", VA = "0x6CB5FC0", Slot = "34")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003C8")]
	internal override uint hierarchyVersion
	{
		[Token(Token = "0x600127C")]
		[Address(RVA = "0x6CB5FD0", Offset = "0x6CB4FD0", VA = "0x6CB5FD0", Slot = "35")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003C9")]
	public override AtlasBase atlas
	{
		[Token(Token = "0x600127D")]
		[Address(RVA = "0x6CB5FE0", Offset = "0x6CB4FE0", VA = "0x6CB5FE0", Slot = "55")]
		get
		{
			return null;
		}
		[Token(Token = "0x600127E")]
		[Address(RVA = "0x6CB5FF0", Offset = "0x6CB4FF0", VA = "0x6CB5FF0", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x6CB5A00", Offset = "0x6CB4A00", VA = "0x6CB5A00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static Object LoadResource(string pathName, Type type, float dpiScaling)
	{
		return null;
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x6CB5BB0", Offset = "0x6CB4BB0", VA = "0x6CB5BB0")]
	internal void Focus()
	{
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x6CB5BC0", Offset = "0x6CB4BC0", VA = "0x6CB5BC0")]
	internal void Blur()
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x6CB5BF0", Offset = "0x6CB4BF0", VA = "0x6CB5BF0")]
	public void ValidateFocus()
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x6CB5C60", Offset = "0x6CB4C60", VA = "0x6CB5C60")]
	private void CreateMarkers()
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x6CB6070", Offset = "0x6CB5070", VA = "0x6CB6070")]
	public Panel(ScriptableObject ownerObject, ContextType contextType, EventDispatcher dispatcher)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x6CB6740", Offset = "0x6CB5740", VA = "0x6CB6740", Slot = "24")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x6CB6850", Offset = "0x6CB5850", VA = "0x6CB6850")]
	internal static VisualElement PickAll(VisualElement root, Vector2 point, [Optional] List<VisualElement> picked, bool includeIgnoredElement = false)
	{
		return null;
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x6CB68F0", Offset = "0x6CB58F0", VA = "0x6CB68F0")]
	private static VisualElement PerformPick(VisualElement root, Vector2 point, [Optional] List<VisualElement> picked, bool includeIgnoredElement = false)
	{
		return null;
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x6CB6CE0", Offset = "0x6CB5CE0", VA = "0x6CB6CE0", Slot = "53")]
	public override VisualElement PickAll(Vector2 point, List<VisualElement> picked)
	{
		return null;
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x6CB6E20", Offset = "0x6CB5E20", VA = "0x6CB6E20", Slot = "52")]
	public override VisualElement Pick(Vector2 point, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x6CB71D0", Offset = "0x6CB61D0", VA = "0x6CB71D0", Slot = "26")]
	public override void ValidateLayout()
	{
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x6CB73D0", Offset = "0x6CB63D0", VA = "0x6CB73D0", Slot = "29")]
	public override void UpdateAnimations()
	{
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x6CB73F0", Offset = "0x6CB63F0", VA = "0x6CB73F0", Slot = "30")]
	public override void UpdateBindings()
	{
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x6CB7410", Offset = "0x6CB6410", VA = "0x6CB7410", Slot = "31")]
	public override void UpdateDataBinding()
	{
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x6CB7430", Offset = "0x6CB6430", VA = "0x6CB7430", Slot = "27")]
	public override void TickSchedulingUpdaters()
	{
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x6CB7AD0", Offset = "0x6CB6AD0", VA = "0x6CB7AD0", Slot = "32")]
	public override void ApplyStyles()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x6CB7AF0", Offset = "0x6CB6AF0", VA = "0x6CB7AF0", Slot = "28")]
	public override void UpdateForRepaint()
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x6CB7BD0", Offset = "0x6CB6BD0", VA = "0x6CB7BD0", Slot = "25")]
	public override void Repaint(Event e)
	{
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x6CB7E70", Offset = "0x6CB6E70", VA = "0x6CB7E70", Slot = "57")]
	public override void Render()
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x6CB8050", Offset = "0x6CB7050", VA = "0x6CB8050", Slot = "36")]
	internal override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x6CB8200", Offset = "0x6CB7200", VA = "0x6CB8200", Slot = "37")]
	internal override void SetUpdater(IVisualTreeUpdater updater, VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x6CB8220", Offset = "0x6CB7220", VA = "0x6CB8220", Slot = "54")]
	internal override IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase)
	{
		return null;
	}
}
