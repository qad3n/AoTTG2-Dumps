// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicEvaluator
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicEvaluator.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Map;
using Photon.Realtime;
using Settings;
using UnityEngine;
using Utility;

namespace CustomLogic;

[Token(Token = "0x20005ED")]
internal class CustomLogicEvaluator
{
	[Token(Token = "0x20005F1")]
	[CompilerGenerated]
	private sealed class _003CEvaluateBlockCoroutine_003Ed__87 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<CustomLogicBaseAst> statements;

		[Token(Token = "0x4001A67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x4001A68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CustomLogicClassInstance classInstance;

		[Token(Token = "0x4001A69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Dictionary<string, object> localVariables;

		[Token(Token = "0x4001A6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConditionalEvalState _003CconditionalState_003E5__2;

		[Token(Token = "0x4001A6B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private List<CustomLogicBaseAst>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001A6C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private CustomLogicBaseAst _003Cstatement_003E5__4;

		[Token(Token = "0x4001A6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003Ctime_003E5__5;

		[Token(Token = "0x4001A6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private CustomLogicConditionalBlockAst _003Cconditional_003E5__6;

		[Token(Token = "0x4001A6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private CoroutineWithData _003Ccwd_003E5__7;

		[Token(Token = "0x4001A70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CustomLogicForBlockAst _003CforBlock_003E5__8;

		[Token(Token = "0x4001A71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private List<object>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x17000A46")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A5A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A47")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A5C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A55")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CEvaluateBlockCoroutine_003Ed__87(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A56")]
		[Address(RVA = "0x20EEF30", Offset = "0x20ED530", VA = "0x1820EEF30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A57")]
		[Address(RVA = "0x20ED1A0", Offset = "0x20EB7A0", VA = "0x1820ED1A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A58")]
		[Address(RVA = "0x20EF070", Offset = "0x20ED670", VA = "0x1820EF070")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6003A59")]
		[Address(RVA = "0x20EF0C0", Offset = "0x20ED6C0", VA = "0x1820EF0C0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6003A5B")]
		[Address(RVA = "0x20EEEF0", Offset = "0x20ED4F0", VA = "0x1820EEEF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005F2")]
	[CompilerGenerated]
	private sealed class _003COnSecond_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x17000A48")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A60")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A49")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A62")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A5D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003COnSecond_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A5E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A5F")]
		[Address(RVA = "0x20EF110", Offset = "0x20ED710", VA = "0x1820EF110", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A61")]
		[Address(RVA = "0x20EF440", Offset = "0x20EDA40", VA = "0x1820EF440", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001A3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _networkCallback;

	[Token(Token = "0x4001A3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<object> emptyList;

	[Token(Token = "0x4001A3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public float CurrentTime;

	[Token(Token = "0x4001A3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool HasSetMusic;

	[Token(Token = "0x4001A40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Dictionary<int, CustomLogicNetworkViewBuiltin> IdToNetworkView;

	[Token(Token = "0x4001A41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Dictionary<string, CustomLogicNetworkViewBuiltin> AddonToNetworkView;

	[Token(Token = "0x4001A42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Dictionary<int, CustomLogicMapObjectBuiltin> IdToMapObjectBuiltin;

	[Token(Token = "0x4001A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected CustomLogicStartAst _start;

	[Token(Token = "0x4001A44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected Dictionary<string, CustomLogicClassInstance> _staticClasses;

	[Token(Token = "0x4001A45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, CustomLogicClassInstance> _addonClasses;

	[Token(Token = "0x4001A46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> _namespacedStaticClasses;

	[Token(Token = "0x4001A47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Dictionary<string, List<CustomLogicClassInstance>> _callbacks;

	[Token(Token = "0x4001A48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public Dictionary<int, Dictionary<string, float>> PlayerIdToLastPropertyChanges;

	[Token(Token = "0x4001A49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public string ScoreboardHeader;

	[Token(Token = "0x4001A4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ScoreboardProperty;

	[Token(Token = "0x4001A4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly object[] EmptyArgs;

	[Token(Token = "0x4001A4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public bool DefaultShowKillScore;

	[Token(Token = "0x4001A4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x81")]
	public bool DefaultShowKillFeed;

	[Token(Token = "0x4001A4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x82")]
	public bool DefaultAddKillScore;

	[Token(Token = "0x4001A4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x83")]
	public bool ShowScoreboardLoadout;

	[Token(Token = "0x4001A50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public bool ShowScoreboardStatus;

	[Token(Token = "0x4001A51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string ForcedCharacterType;

	[Token(Token = "0x4001A52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public string ForcedLoadout;

	[Token(Token = "0x4001A56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Stack<(string className, string methodName, CustomLogicSourceType? ns)> _executionStack;

	[Token(Token = "0x4001A57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private int _currentLineNumber;

	[Token(Token = "0x4001A58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public object[] Parameters3;

	[Token(Token = "0x4001A59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string add;

	[Token(Token = "0x4001A5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string sub;

	[Token(Token = "0x4001A5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string mul;

	[Token(Token = "0x4001A5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string div;

	[Token(Token = "0x4001A5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private string mod;

	[Token(Token = "0x4001A5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private string eq;

	[Token(Token = "0x4001A5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string copy;

	[Token(Token = "0x17000A43")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003A30")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003A31")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A44")]
	public bool CaptureErrors
	{
		[Token(Token = "0x6003A32")]
		[Address(RVA = "0x1B90350", Offset = "0x1B8E950", VA = "0x181B90350")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003A33")]
		[Address(RVA = "0x1C5E4B0", Offset = "0x1C5CAB0", VA = "0x181C5E4B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A45")]
	public List<CustomLogicError> CapturedErrors
	{
		[Token(Token = "0x6003A34")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003A35")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003A04")]
	[Address(RVA = "0x20E2C90", Offset = "0x20E1290", VA = "0x1820E2C90")]
	public void Start(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x6003A05")]
	[Address(RVA = "0x20D55F0", Offset = "0x20D3BF0", VA = "0x1820D55F0")]
	protected void AddCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6003A06")]
	[Address(RVA = "0x20E20E0", Offset = "0x20E06E0", VA = "0x1820E20E0")]
	protected void RemoveCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6003A07")]
	[Address(RVA = "0x20E2080", Offset = "0x20E0680", VA = "0x1820E2080")]
	public void OnTick()
	{
	}

	[Token(Token = "0x6003A08")]
	[Address(RVA = "0x20E1960", Offset = "0x20DFF60", VA = "0x1820E1960")]
	public void OnFrame()
	{
	}

	[Token(Token = "0x6003A09")]
	[Address(RVA = "0x20E19A0", Offset = "0x20DFFA0", VA = "0x1820E19A0")]
	public void OnLateFrame()
	{
	}

	[Token(Token = "0x6003A0A")]
	[Address(RVA = "0x20E0E20", Offset = "0x20DF420", VA = "0x1820E0E20")]
	public void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003A0B")]
	[Address(RVA = "0x20E1EB0", Offset = "0x20E04B0", VA = "0x1820E1EB0")]
	public void OnPlayerSpawn(Player player, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003A0C")]
	[Address(RVA = "0x20E13D0", Offset = "0x20DF9D0", VA = "0x1820E13D0")]
	public void OnCharacterSpawn(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003A0D")]
	[Address(RVA = "0x20E12D0", Offset = "0x20DF8D0", VA = "0x1820E12D0")]
	public void OnCharacterReloaded(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003A0E")]
	[Address(RVA = "0x20E1140", Offset = "0x20DF740", VA = "0x1820E1140")]
	public void OnCharacterDie(BaseCharacter victim, BaseCharacter killer, string killerName)
	{
	}

	[Token(Token = "0x6003A0F")]
	[Address(RVA = "0x20E0F30", Offset = "0x20DF530", VA = "0x1820E0F30")]
	public void OnCharacterDamaged(BaseCharacter victim, BaseCharacter killer, string killerName, int damage)
	{
	}

	[Token(Token = "0x6003A10")]
	[Address(RVA = "0x20E14D0", Offset = "0x20DFAD0", VA = "0x1820E14D0")]
	public object OnChatInput(string message)
	{
		return null;
	}

	[Token(Token = "0x6003A11")]
	[Address(RVA = "0x20E1C40", Offset = "0x20E0240", VA = "0x1820E1C40")]
	public void OnPlayerJoin(Player player)
	{
	}

	[Token(Token = "0x6003A12")]
	[Address(RVA = "0x20E1DC0", Offset = "0x20E03C0", VA = "0x1820E1DC0")]
	public void OnPlayerLeave(Player player)
	{
	}

	[Token(Token = "0x6003A13")]
	[Address(RVA = "0x20E19E0", Offset = "0x20DFFE0", VA = "0x1820E19E0")]
	public void OnNetworkMessage(Player sender, string message, double sentServerTimestamp)
	{
	}

	[Token(Token = "0x6003A14")]
	[Address(RVA = "0x20DE1C0", Offset = "0x20DC7C0", VA = "0x1820DE1C0")]
	public static CustomLogicCharacterBuiltin GetCharacterBuiltin(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x6003A15")]
	[Address(RVA = "0x20E2010", Offset = "0x20E0610", VA = "0x1820E2010")]
	[IteratorStateMachine(typeof(_003COnSecond_003Ed__18))]
	private IEnumerator OnSecond()
	{
		return null;
	}

	[Token(Token = "0x6003A16")]
	[Address(RVA = "0x20DF420", Offset = "0x20DDA20", VA = "0x1820DF420")]
	private void Init()
	{
	}

	[Token(Token = "0x6003A17")]
	[Address(RVA = "0x20D7160", Offset = "0x20D5760", VA = "0x1820D7160")]
	private void CreateAddonNetworkChannels()
	{
	}

	[Token(Token = "0x6003A18")]
	[Address(RVA = "0x20DBDB0", Offset = "0x20DA3B0", VA = "0x1820DBDB0")]
	private void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x6003A19")]
	[Address(RVA = "0x20E0540", Offset = "0x20DEB40", VA = "0x1820E0540")]
	public void LoadMapObjectComponents(MapObject obj, bool init = false)
	{
	}

	[Token(Token = "0x6003A1A")]
	[Address(RVA = "0x20E0660", Offset = "0x20DEC60", VA = "0x1820E0660")]
	public bool LoadRuntimeMapObjectComponents(MapObject obj, bool init = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A1B")]
	[Address(RVA = "0x20D5880", Offset = "0x20D3E80", VA = "0x1820D5880")]
	public CustomLogicComponentInstance AddMapObjectComponent(MapObject obj, string componentName)
	{
		return null;
	}

	[Token(Token = "0x6003A1C")]
	[Address(RVA = "0x20E2320", Offset = "0x20E0920", VA = "0x1820E2320")]
	public void RemoveComponent(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x6003A1D")]
	[Address(RVA = "0x20D7AC0", Offset = "0x20D60C0", VA = "0x1820D7AC0")]
	public CustomLogicComponentInstance CreateComponentInstance(string className, MapObject obj, MapScriptComponent script)
	{
		return null;
	}

	[Token(Token = "0x6003A1E")]
	[Address(RVA = "0x20DD8D0", Offset = "0x20DBED0", VA = "0x1820DD8D0")]
	private void FindSubcolliders(Transform t, HashSet<GameObject> set)
	{
	}

	[Token(Token = "0x6003A1F")]
	[Address(RVA = "0x20E27D0", Offset = "0x20E0DD0", VA = "0x1820E27D0")]
	public CustomLogicMapObjectBuiltin SetupMapObject(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003A20")]
	[Address(RVA = "0x20DF1B0", Offset = "0x20DD7B0", VA = "0x1820DF1B0")]
	public CustomLogicMapObjectBuiltin GetOrCreateMapObjectBuiltin(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003A21")]
	[Address(RVA = "0x20E28F0", Offset = "0x20E0EF0", VA = "0x1820E28F0")]
	public CustomLogicPhotonSync SetupNetworking(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003A22")]
	[Address(RVA = "0x20DEE30", Offset = "0x20DD430", VA = "0x1820DEE30")]
	public string GetLineNumberString(int lineNumber)
	{
		return null;
	}

	[Token(Token = "0x6003A23")]
	[Address(RVA = "0x20E0900", Offset = "0x20DEF00", VA = "0x1820E0900")]
	private void LogCustomLogicError(string errorMessage, bool showInChat)
	{
	}

	[Token(Token = "0x6003A24")]
	[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6003A25")]
	[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
	public Dictionary<string, CustomLogicClassInstance> GetStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x6003A26")]
	[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
	public Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> GetNamespacedStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x6003A27")]
	[Address(RVA = "0x20DEE80", Offset = "0x20DD480", VA = "0x1820DEE80")]
	public Dictionary<string, BaseSetting> GetModeSettings()
	{
		return null;
	}

	[Token(Token = "0x6003A28")]
	[Address(RVA = "0x20DDC30", Offset = "0x20DC230", VA = "0x1820DDC30")]
	public Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettings()
	{
		return null;
	}

	[Token(Token = "0x6003A29")]
	[Address(RVA = "0x20DE7A0", Offset = "0x20DCDA0", VA = "0x1820DE7A0")]
	public Dictionary<string, BaseSetting> GetComponentSettings(string component, List<string> parameters)
	{
		return null;
	}

	[Token(Token = "0x6003A2A")]
	[Address(RVA = "0x20D8670", Offset = "0x20D6C70", VA = "0x1820D8670")]
	private BaseSetting CreateInspectorSetting(string className, string variableName, object value)
	{
		return null;
	}

	[Token(Token = "0x6003A2B")]
	[Address(RVA = "0x20D6170", Offset = "0x20D4770", VA = "0x1820D6170")]
	public object ApplyComponentInspectorRules(string className, string variableName, object value)
	{
		return null;
	}

	[Token(Token = "0x6003A2C")]
	[Address(RVA = "0x20D7EA0", Offset = "0x20D64A0", VA = "0x1820D7EA0")]
	private static InspectorSettingMetadata CreateInspectorMetadata(CustomLogicAssignmentExpressionAst assignment)
	{
		return null;
	}

	[Token(Token = "0x6003A2D")]
	[Address(RVA = "0x20DE550", Offset = "0x20DCB50", VA = "0x1820DE550")]
	public List<string> GetComponentNames()
	{
		return null;
	}

	[Token(Token = "0x6003A2E")]
	[Address(RVA = "0x20DF2E0", Offset = "0x20DD8E0", VA = "0x1820DF2E0")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x6003A2F")]
	[Address(RVA = "0x20D8BF0", Offset = "0x20D71F0", VA = "0x1820D8BF0")]
	public void CreateStaticClass(string className)
	{
	}

	[Token(Token = "0x6003A36")]
	[Address(RVA = "0x20E3FB0", Offset = "0x20E25B0", VA = "0x1820E3FB0")]
	public CustomLogicEvaluator(CustomLogicStartAst start, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6003A37")]
	[Address(RVA = "0x20D70F0", Offset = "0x20D56F0", VA = "0x1820D70F0")]
	public void ClearCapturedErrors()
	{
	}

	[Token(Token = "0x6003A38")]
	[Address(RVA = "0x20D7760", Offset = "0x20D5D60", VA = "0x1820D7760")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x6003A39")]
	[Address(RVA = "0x20D7780", Offset = "0x20D5D80", VA = "0x1820D7780")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? callerNamespace)
	{
		return null;
	}

	[Token(Token = "0x6003A3A")]
	[Address(RVA = "0x20D8D60", Offset = "0x20D7360", VA = "0x1820D8D60")]
	private CustomLogicClassInstance CreateUserClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? classNamespace)
	{
		return null;
	}

	[Token(Token = "0x6003A3B")]
	[Address(RVA = "0x20E2360", Offset = "0x20E0960", VA = "0x1820E2360")]
	public void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x6003A3C")]
	[Address(RVA = "0x20D9B80", Offset = "0x20D8180", VA = "0x1820D9B80")]
	[IteratorStateMachine(typeof(_003CEvaluateBlockCoroutine_003Ed__87))]
	private IEnumerator EvaluateBlockCoroutine(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements)
	{
		return null;
	}

	[Token(Token = "0x6003A3D")]
	[Address(RVA = "0x20D9C30", Offset = "0x20D8230", VA = "0x1820D9C30")]
	private bool EvaluateBlock(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A3E")]
	[Address(RVA = "0x20D9040", Offset = "0x20D7640", VA = "0x1820D9040")]
	private void EvaluateAssignmentExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicAssignmentExpressionAst assignment)
	{
	}

	[Token(Token = "0x6003A3F")]
	[Address(RVA = "0x20DF370", Offset = "0x20DD970", VA = "0x1820DF370")]
	public bool HasMethod(CustomLogicClassInstance classInstance, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A40")]
	[Address(RVA = "0x20DBF30", Offset = "0x20DA530", VA = "0x1820DBF30")]
	public object EvaluateMethod(CustomLogicClassInstance classInstance, string methodName, [Optional] object[] parameterValues, int callerLineNumber = 0)
	{
		return null;
	}

	[Token(Token = "0x6003A41")]
	[Address(RVA = "0x20DCD90", Offset = "0x20DB390", VA = "0x1820DCD90")]
	public object EvaluateMethod(UserMethod userMethod, [Optional] object[] parameterValues)
	{
		return null;
	}

	[Token(Token = "0x6003A42")]
	[Address(RVA = "0x20DAAA0", Offset = "0x20D90A0", VA = "0x1820DAAA0")]
	private object EvaluateExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicBaseExpressionAst expression)
	{
		return null;
	}

	[Token(Token = "0x6003A43")]
	[Address(RVA = "0x20DD790", Offset = "0x20DBD90", VA = "0x1820DD790")]
	private object EvaluateUnaryExpression(CustomLogicSymbol symbol, object next)
	{
		return null;
	}

	[Token(Token = "0x6003A44")]
	[Address(RVA = "0x20D97C0", Offset = "0x20D7DC0", VA = "0x1820D97C0")]
	private object EvaluateBinopExpression(CustomLogicSymbol symbol, object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003A45")]
	[Address(RVA = "0x20D6E10", Offset = "0x20D5410", VA = "0x1820D6E10")]
	private object ClassMathOperation(object left, object right, string method)
	{
		return null;
	}

	[Token(Token = "0x6003A46")]
	[Address(RVA = "0x20D5EB0", Offset = "0x20D44B0", VA = "0x1820D5EB0")]
	private object AddValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003A47")]
	[Address(RVA = "0x20E3D20", Offset = "0x20E2320", VA = "0x1820E3D20")]
	private object SubtractValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003A48")]
	[Address(RVA = "0x20E0C50", Offset = "0x20DF250", VA = "0x1820E0C50")]
	private object MultiplyValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003A49")]
	[Address(RVA = "0x20D8E70", Offset = "0x20D7470", VA = "0x1820D8E70")]
	private object DivideValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003A4A")]
	[Address(RVA = "0x20E0A70", Offset = "0x20DF070", VA = "0x1820E0A70")]
	private object ModuloValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003A4B")]
	[Address(RVA = "0x20D6970", Offset = "0x20D4F70", VA = "0x1820D6970")]
	public bool CheckEquals(object left, object right)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A4C")]
	public static T ConvertTo<T>(object obj)
	{
		return (T)null;
	}
}
