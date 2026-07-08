using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000241")]
internal class Panel : BaseVisualElementPanel
{
	[Token(Token = "0x4000838")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private VisualElement m_RootContainer;

	[Token(Token = "0x4000839")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private VisualTreeUpdater m_VisualTreeUpdater;

	[Token(Token = "0x400083A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private IStylePropertyAnimationSystem m_StylePropertyAnimationSystem;

	[Token(Token = "0x400083B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private string m_PanelName;

	[Token(Token = "0x400083C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private uint m_Version;

	[Token(Token = "0x400083D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	private uint m_RepaintVersion;

	[Token(Token = "0x400083E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private uint m_HierarchyVersion;

	[Token(Token = "0x400083F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private ProfilerMarker m_MarkerBeforeUpdate;

	[Token(Token = "0x4000840")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private ProfilerMarker m_MarkerUpdate;

	[Token(Token = "0x4000841")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private ProfilerMarker m_MarkerLayout;

	[Token(Token = "0x4000842")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private ProfilerMarker m_MarkerBindings;

	[Token(Token = "0x4000843")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private ProfilerMarker m_MarkerAnimations;

	[Token(Token = "0x4000844")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerPickAll;

	[Token(Token = "0x4000846")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private TimerEventScheduler m_Scheduler;

	[Token(Token = "0x400084E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x16B")]
	private bool m_JustReceivedFocus;

	[Token(Token = "0x4000852")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private Shader m_StandardShader;

	[Token(Token = "0x4000853")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private AtlasBase m_Atlas;

	[Token(Token = "0x4000854")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private bool m_ValidatingLayout;

	[Token(Token = "0x4000855")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<Panel> beforeAnyRepaint;

	[Token(Token = "0x170002CB")]
	public sealed override VisualElement visualTree
	{
		[Token(Token = "0x6000EA9")]
		[Address(RVA = "0x4D27830", Offset = "0x4D27830", VA = "0x4D27830", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CC")]
	public sealed override EventDispatcher dispatcher
	{
		[Token(Token = "0x6000EAA")]
		[Address(RVA = "0x4D27840", Offset = "0x4D27840", VA = "0x4D27840", Slot = "39")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x4D27850", Offset = "0x4D27850", VA = "0x4D27850", Slot = "40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CD")]
	public TimerEventScheduler timerEventScheduler
	{
		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0x4D27870", Offset = "0x4D27870", VA = "0x4D27870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CE")]
	internal override IScheduler scheduler
	{
		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x4D278E0", Offset = "0x4D278E0", VA = "0x4D278E0", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CF")]
	internal override IStylePropertyAnimationSystem styleAnimationSystem
	{
		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x4D27950", Offset = "0x4D27950", VA = "0x4D27950", Slot = "42")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EAF")]
		[Address(RVA = "0x4D27960", Offset = "0x4D27960", VA = "0x4D27960", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x170002D0")]
	public override ScriptableObject ownerObject
	{
		[Token(Token = "0x6000EB0")]
		[Address(RVA = "0x4D27A30", Offset = "0x4D27A30", VA = "0x4D27A30", Slot = "14")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EB1")]
		[Address(RVA = "0x4D27A40", Offset = "0x4D27A40", VA = "0x4D27A40", Slot = "15")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002D1")]
	public override ContextType contextType
	{
		[Token(Token = "0x6000EB2")]
		[Address(RVA = "0x4D27A60", Offset = "0x4D27A60", VA = "0x4D27A60", Slot = "44")]
		[CompilerGenerated]
		get
		{
			return default(ContextType);
		}
		[Token(Token = "0x6000EB3")]
		[Address(RVA = "0x4D27A70", Offset = "0x4D27A70", VA = "0x4D27A70", Slot = "45")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	public override SavePersistentViewData saveViewData
	{
		[Token(Token = "0x6000EB4")]
		[Address(RVA = "0x4D27A80", Offset = "0x4D27A80", VA = "0x4D27A80", Slot = "16")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D3")]
	public override GetViewDataDictionary getViewDataDictionary
	{
		[Token(Token = "0x6000EB5")]
		[Address(RVA = "0x4D27A90", Offset = "0x4D27A90", VA = "0x4D27A90", Slot = "17")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D4")]
	public sealed override FocusController focusController
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0x4D27AA0", Offset = "0x4D27AA0", VA = "0x4D27AA0", Slot = "20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x4D27AB0", Offset = "0x4D27AB0", VA = "0x4D27AB0", Slot = "21")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D5")]
	public override UnityEngine.EventInterests IMGUIEventInterests
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x4D27AD0", Offset = "0x4D27AD0", VA = "0x4D27AD0", Slot = "12")]
		[CompilerGenerated]
		get
		{
			return default(UnityEngine.EventInterests);
		}
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x4D27AF0", Offset = "0x4D27AF0", VA = "0x4D27AF0", Slot = "13")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D6")]
	private static LoadResourceFunction loadResourceFunc
	{
		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x4D27B10", Offset = "0x4D27B10", VA = "0x4D27B10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D7")]
	internal string name
	{
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x4D27E80", Offset = "0x4D27E80", VA = "0x4D27E80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x4D1D4A0", Offset = "0x4D1D4A0", VA = "0x4D1D4A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D8")]
	private static TimeMsFunction TimeSinceStartup
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x4D280D0", Offset = "0x4D280D0", VA = "0x4D280D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D9")]
	public override int IMGUIContainersCount
	{
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x4D28140", Offset = "0x4D28140", VA = "0x4D28140", Slot = "18")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x4D28150", Offset = "0x4D28150", VA = "0x4D28150", Slot = "19")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	public override IMGUIContainer rootIMGUIContainer
	{
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x4D28160", Offset = "0x4D28160", VA = "0x4D28160", Slot = "22")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DB")]
	internal override uint version
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x4D28170", Offset = "0x4D28170", VA = "0x4D28170", Slot = "30")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170002DC")]
	internal override uint hierarchyVersion
	{
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x4D28180", Offset = "0x4D28180", VA = "0x4D28180", Slot = "31")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170002DD")]
	internal override Shader standardShader
	{
		[Token(Token = "0x6000EC8")]
		[Address(RVA = "0x4D28190", Offset = "0x4D28190", VA = "0x4D28190", Slot = "49")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DE")]
	public override AtlasBase atlas
	{
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x4D281A0", Offset = "0x4D281A0", VA = "0x4D281A0", Slot = "51")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ECA")]
		[Address(RVA = "0x4D281B0", Offset = "0x4D281B0", VA = "0x4D281B0", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x4D27B80", Offset = "0x4D27B80", VA = "0x4D27B80")]
	internal static Object LoadResource(string pathName, Type type, float dpiScaling)
	{
		return null;
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x4D27D30", Offset = "0x4D27D30", VA = "0x4D27D30")]
	internal void Focus()
	{
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x4D27D40", Offset = "0x4D27D40", VA = "0x4D27D40")]
	internal void Blur()
	{
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x4D27DF0", Offset = "0x4D27DF0", VA = "0x4D27DF0", Slot = "25")]
	public override void ValidateFocus()
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x4D27E90", Offset = "0x4D27E90", VA = "0x4D27E90")]
	private void CreateMarkers()
	{
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x4D28230", Offset = "0x4D28230", VA = "0x4D28230")]
	public Panel(ScriptableObject ownerObject, ContextType contextType, EventDispatcher dispatcher)
	{
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x4D28870", Offset = "0x4D28870", VA = "0x4D28870", Slot = "23")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x4D288D0", Offset = "0x4D288D0", VA = "0x4D288D0")]
	public static long TimeSinceStartupMs()
	{
		return default(long);
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x4D289B0", Offset = "0x4D289B0", VA = "0x4D289B0")]
	internal static long DefaultTimeSinceStartupMs()
	{
		return default(long);
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x4D289D0", Offset = "0x4D289D0", VA = "0x4D289D0")]
	private static VisualElement PickAll(VisualElement root, Vector2 point, [Optional] List<VisualElement> picked, bool includeIgnoredElement = false)
	{
		return null;
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x4D28A70", Offset = "0x4D28A70", VA = "0x4D28A70")]
	private static VisualElement PerformPick(VisualElement root, Vector2 point, [Optional] List<VisualElement> picked, bool includeIgnoredElement = false)
	{
		return null;
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x4D28DD0", Offset = "0x4D28DD0", VA = "0x4D28DD0", Slot = "47")]
	public override VisualElement PickAll(Vector2 point, List<VisualElement> picked)
	{
		return null;
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x4D28F10", Offset = "0x4D28F10", VA = "0x4D28F10", Slot = "46")]
	public override VisualElement Pick(Vector2 point)
	{
		return null;
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x4D293D0", Offset = "0x4D293D0", VA = "0x4D293D0", Slot = "26")]
	public override void ValidateLayout()
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x4D29460", Offset = "0x4D29460", VA = "0x4D29460", Slot = "27")]
	public override void UpdateAnimations()
	{
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x4D294A0", Offset = "0x4D294A0", VA = "0x4D294A0", Slot = "28")]
	public override void UpdateBindings()
	{
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x4D294E0", Offset = "0x4D294E0", VA = "0x4D294E0", Slot = "29")]
	public override void ApplyStyles()
	{
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x4D29500", Offset = "0x4D29500", VA = "0x4D29500")]
	private void UpdateForRepaint()
	{
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x4D29570", Offset = "0x4D29570", VA = "0x4D29570", Slot = "24")]
	public override void Repaint(Event e)
	{
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x4D297A0", Offset = "0x4D297A0", VA = "0x4D297A0", Slot = "32")]
	internal override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x4D297E0", Offset = "0x4D297E0", VA = "0x4D297E0", Slot = "48")]
	internal override IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase)
	{
		return null;
	}
}
