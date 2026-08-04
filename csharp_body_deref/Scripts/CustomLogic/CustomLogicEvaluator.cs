// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicEvaluator
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000496")]
internal class CustomLogicEvaluator
{
	[Token(Token = "0x2000498")]
	[CompilerGenerated]
	private sealed class _003CEvaluateBlockCoroutine_003Ed__64 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001419")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400141A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400141B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<CustomLogicBaseAst> statements;

		[Token(Token = "0x400141C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x400141D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CustomLogicClassInstance classInstance;

		[Token(Token = "0x400141E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Dictionary<string, object> localVariables;

		[Token(Token = "0x400141F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConditionalEvalState _003CconditionalState_003E5__2;

		[Token(Token = "0x4001420")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private List<CustomLogicBaseAst>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001421")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private CustomLogicBaseAst _003Cstatement_003E5__4;

		[Token(Token = "0x4001422")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003Ctime_003E5__5;

		[Token(Token = "0x4001423")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private CustomLogicConditionalBlockAst _003Cconditional_003E5__6;

		[Token(Token = "0x4001424")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private CoroutineWithData _003Ccwd_003E5__7;

		[Token(Token = "0x4001425")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CustomLogicForBlockAst _003CforBlock_003E5__8;

		[Token(Token = "0x4001426")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private List<object>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x1700094F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60030D2")]
			[Address(RVA = "0x417A3E0", Offset = "0x417A3E0", VA = "0x417A3E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000950")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60030D4")]
			[Address(RVA = "0x417A430", Offset = "0x417A430", VA = "0x417A430", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60030CD")]
		[Address(RVA = "0x41715B0", Offset = "0x41715B0", VA = "0x41715B0")]
		[DebuggerHidden]
		public _003CEvaluateBlockCoroutine_003Ed__64(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60030CE")]
		[Address(RVA = "0x4178340", Offset = "0x4178340", VA = "0x4178340", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60030CF")]
		[Address(RVA = "0x4178480", Offset = "0x4178480", VA = "0x4178480", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60030D0")]
		[Address(RVA = "0x417A3A0", Offset = "0x417A3A0", VA = "0x417A3A0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60030D1")]
		[Address(RVA = "0x417A350", Offset = "0x417A350", VA = "0x417A350")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60030D3")]
		[Address(RVA = "0x417A3F0", Offset = "0x417A3F0", VA = "0x417A3F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000499")]
	[CompilerGenerated]
	private sealed class _003COnSecond_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001427")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001428")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001429")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x17000951")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60030D8")]
			[Address(RVA = "0x417A7F0", Offset = "0x417A7F0", VA = "0x417A7F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000952")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60030DA")]
			[Address(RVA = "0x417A840", Offset = "0x417A840", VA = "0x417A840", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60030D5")]
		[Address(RVA = "0x416DB90", Offset = "0x416DB90", VA = "0x416DB90")]
		[DebuggerHidden]
		public _003COnSecond_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60030D6")]
		[Address(RVA = "0x417A440", Offset = "0x417A440", VA = "0x417A440", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60030D7")]
		[Address(RVA = "0x417A450", Offset = "0x417A450", VA = "0x417A450", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60030D9")]
		[Address(RVA = "0x417A800", Offset = "0x417A800", VA = "0x417A800", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40013F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _networkCallback;

	[Token(Token = "0x40013F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<object> emptyList;

	[Token(Token = "0x40013F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public float CurrentTime;

	[Token(Token = "0x40013F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool HasSetMusic;

	[Token(Token = "0x40013F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Dictionary<int, CustomLogicNetworkViewBuiltin> IdToNetworkView;

	[Token(Token = "0x40013F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Dictionary<string, CustomLogicNetworkViewBuiltin> AddonToNetworkView;

	[Token(Token = "0x40013F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Dictionary<int, CustomLogicMapObjectBuiltin> IdToMapObjectBuiltin;

	[Token(Token = "0x40013FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected CustomLogicStartAst _start;

	[Token(Token = "0x40013FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected Dictionary<string, CustomLogicClassInstance> _staticClasses;

	[Token(Token = "0x40013FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, CustomLogicClassInstance> _addonClasses;

	[Token(Token = "0x40013FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> _namespacedStaticClasses;

	[Token(Token = "0x40013FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Dictionary<string, List<CustomLogicClassInstance>> _callbacks;

	[Token(Token = "0x40013FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public Dictionary<int, Dictionary<string, float>> PlayerIdToLastPropertyChanges;

	[Token(Token = "0x4001400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public string ScoreboardHeader;

	[Token(Token = "0x4001401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ScoreboardProperty;

	[Token(Token = "0x4001402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly object[] EmptyArgs;

	[Token(Token = "0x4001403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public bool DefaultShowKillScore;

	[Token(Token = "0x4001404")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x81")]
	public bool DefaultShowKillFeed;

	[Token(Token = "0x4001405")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x82")]
	public bool DefaultAddKillScore;

	[Token(Token = "0x4001406")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x83")]
	public bool ShowScoreboardLoadout;

	[Token(Token = "0x4001407")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public bool ShowScoreboardStatus;

	[Token(Token = "0x4001408")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string ForcedCharacterType;

	[Token(Token = "0x4001409")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public string ForcedLoadout;

	[Token(Token = "0x400140D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Stack<(string className, string methodName, CustomLogicSourceType? ns)> _executionStack;

	[Token(Token = "0x400140E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private int _currentLineNumber;

	[Token(Token = "0x400140F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public object[] Parameters3;

	[Token(Token = "0x4001410")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string add;

	[Token(Token = "0x4001411")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string sub;

	[Token(Token = "0x4001412")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string mul;

	[Token(Token = "0x4001413")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string div;

	[Token(Token = "0x4001414")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private string mod;

	[Token(Token = "0x4001415")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private string eq;

	[Token(Token = "0x4001416")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string copy;

	[Token(Token = "0x1700094C")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003098")]
		[Address(RVA = "0x416F3D0", Offset = "0x416F3D0", VA = "0x416F3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003099")]
		[Address(RVA = "0x416F3E0", Offset = "0x416F3E0", VA = "0x416F3E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700094D")]
	public bool CaptureErrors
	{
		[Token(Token = "0x600309A")]
		[Address(RVA = "0x416F400", Offset = "0x416F400", VA = "0x416F400")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600309B")]
		[Address(RVA = "0x416F410", Offset = "0x416F410", VA = "0x416F410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700094E")]
	public List<CustomLogicError> CapturedErrors
	{
		[Token(Token = "0x600309C")]
		[Address(RVA = "0x416F420", Offset = "0x416F420", VA = "0x416F420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600309D")]
		[Address(RVA = "0x416F430", Offset = "0x416F430", VA = "0x416F430")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003083")]
	[Address(RVA = "0x4167DC0", Offset = "0x4167DC0", VA = "0x4167DC0")]
	public void Start(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x6003084")]
	[Address(RVA = "0x416BA70", Offset = "0x416BA70", VA = "0x416BA70")]
	protected void AddCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6003085")]
	[Address(RVA = "0x416C170", Offset = "0x416C170", VA = "0x416C170")]
	protected void RemoveCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6003086")]
	[Address(RVA = "0x416C460", Offset = "0x416C460", VA = "0x416C460")]
	public void OnTick()
	{
	}

	[Token(Token = "0x6003087")]
	[Address(RVA = "0x416C4C0", Offset = "0x416C4C0", VA = "0x416C4C0")]
	public void OnFrame()
	{
	}

	[Token(Token = "0x6003088")]
	[Address(RVA = "0x416C500", Offset = "0x416C500", VA = "0x416C500")]
	public void OnLateFrame()
	{
	}

	[Token(Token = "0x6003089")]
	[Address(RVA = "0x416C540", Offset = "0x416C540", VA = "0x416C540")]
	public void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600308A")]
	[Address(RVA = "0x416C640", Offset = "0x416C640", VA = "0x416C640")]
	public void OnPlayerSpawn(Player player, BaseCharacter character)
	{
	}

	[Token(Token = "0x600308B")]
	[Address(RVA = "0x416CA30", Offset = "0x416CA30", VA = "0x416CA30")]
	public void OnCharacterSpawn(BaseCharacter character)
	{
	}

	[Token(Token = "0x600308C")]
	[Address(RVA = "0x416CB60", Offset = "0x416CB60", VA = "0x416CB60")]
	public void OnCharacterReloaded(BaseCharacter character)
	{
	}

	[Token(Token = "0x600308D")]
	[Address(RVA = "0x416CC90", Offset = "0x416CC90", VA = "0x416CC90")]
	public void OnCharacterDie(BaseCharacter victim, BaseCharacter killer, string killerName)
	{
	}

	[Token(Token = "0x600308E")]
	[Address(RVA = "0x416CE00", Offset = "0x416CE00", VA = "0x416CE00")]
	public void OnCharacterDamaged(BaseCharacter victim, BaseCharacter killer, string killerName, int damage)
	{
	}

	[Token(Token = "0x600308F")]
	[Address(RVA = "0x416CFE0", Offset = "0x416CFE0", VA = "0x416CFE0")]
	public object OnChatInput(string message)
	{
		return null;
	}

	[Token(Token = "0x6003090")]
	[Address(RVA = "0x416D6D0", Offset = "0x416D6D0", VA = "0x416D6D0")]
	public void OnPlayerJoin(Player player)
	{
	}

	[Token(Token = "0x6003091")]
	[Address(RVA = "0x416D850", Offset = "0x416D850", VA = "0x416D850")]
	public void OnPlayerLeave(Player player)
	{
	}

	[Token(Token = "0x6003092")]
	[Address(RVA = "0x416D930", Offset = "0x416D930", VA = "0x416D930")]
	public void OnNetworkMessage(Player sender, string message, double sentServerTimestamp)
	{
	}

	[Token(Token = "0x6003093")]
	[Address(RVA = "0x416C7C0", Offset = "0x416C7C0", VA = "0x416C7C0")]
	public static CustomLogicCharacterBuiltin GetCharacterBuiltin(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x6003094")]
	[Address(RVA = "0x416BF70", Offset = "0x416BF70", VA = "0x416BF70")]
	[IteratorStateMachine(typeof(_003COnSecond_003Ed__18))]
	private IEnumerator OnSecond()
	{
		return null;
	}

	[Token(Token = "0x6003095")]
	[Address(RVA = "0x4169220", Offset = "0x4169220", VA = "0x4169220")]
	private void Init()
	{
	}

	[Token(Token = "0x6003096")]
	[Address(RVA = "0x416E570", Offset = "0x416E570", VA = "0x416E570")]
	private void CreateAddonNetworkChannels()
	{
	}

	[Token(Token = "0x6003097")]
	[Address(RVA = "0x416BE10", Offset = "0x416BE10", VA = "0x416BE10")]
	private void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x600309E")]
	[Address(RVA = "0x416F450", Offset = "0x416F450", VA = "0x416F450")]
	public CustomLogicEvaluator(CustomLogicStartAst start, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x600309F")]
	[Address(RVA = "0x416FA40", Offset = "0x416FA40", VA = "0x416FA40")]
	public void ClearCapturedErrors()
	{
	}

	[Token(Token = "0x60030A0")]
	[Address(RVA = "0x416FAA0", Offset = "0x416FAA0", VA = "0x416FAA0")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x60030A1")]
	[Address(RVA = "0x416DD10", Offset = "0x416DD10", VA = "0x416DD10")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? callerNamespace)
	{
		return null;
	}

	[Token(Token = "0x60030A2")]
	[Address(RVA = "0x416FAB0", Offset = "0x416FAB0", VA = "0x416FAB0")]
	private CustomLogicClassInstance CreateUserClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? classNamespace)
	{
		return null;
	}

	[Token(Token = "0x60030A3")]
	[Address(RVA = "0x416E000", Offset = "0x416E000", VA = "0x416E000")]
	public void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x60030A4")]
	[Address(RVA = "0x41714F0", Offset = "0x41714F0", VA = "0x41714F0")]
	[IteratorStateMachine(typeof(_003CEvaluateBlockCoroutine_003Ed__64))]
	private IEnumerator EvaluateBlockCoroutine(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements)
	{
		return null;
	}

	[Token(Token = "0x60030A5")]
	[Address(RVA = "0x41715D0", Offset = "0x41715D0", VA = "0x41715D0")]
	private bool EvaluateBlock(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A6")]
	[Address(RVA = "0x41723A0", Offset = "0x41723A0", VA = "0x41723A0")]
	private void EvaluateAssignmentExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicAssignmentExpressionAst assignment)
	{
	}

	[Token(Token = "0x60030A7")]
	[Address(RVA = "0x416D630", Offset = "0x416D630", VA = "0x416D630")]
	public bool HasMethod(CustomLogicClassInstance classInstance, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A8")]
	[Address(RVA = "0x416A7C0", Offset = "0x416A7C0", VA = "0x416A7C0")]
	public object EvaluateMethod(CustomLogicClassInstance classInstance, string methodName, [Optional] object[] parameterValues, int callerLineNumber = 0)
	{
		return null;
	}

	[Token(Token = "0x60030A9")]
	[Address(RVA = "0x41730F0", Offset = "0x41730F0", VA = "0x41730F0")]
	public object EvaluateMethod(UserMethod userMethod, [Optional] object[] parameterValues)
	{
		return null;
	}

	[Token(Token = "0x60030AA")]
	[Address(RVA = "0x416FC40", Offset = "0x416FC40", VA = "0x416FC40")]
	private object EvaluateExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicBaseExpressionAst expression)
	{
		return null;
	}

	[Token(Token = "0x60030AB")]
	[Address(RVA = "0x4173D70", Offset = "0x4173D70", VA = "0x4173D70")]
	private object EvaluateUnaryExpression(CustomLogicSymbol symbol, object next)
	{
		return null;
	}

	[Token(Token = "0x60030AC")]
	[Address(RVA = "0x4173E20", Offset = "0x4173E20", VA = "0x4173E20")]
	private object EvaluateBinopExpression(CustomLogicSymbol symbol, object left, object right)
	{
		return null;
	}

	[Token(Token = "0x60030AD")]
	[Address(RVA = "0x4174620", Offset = "0x4174620", VA = "0x4174620")]
	private object ClassMathOperation(object left, object right, string method)
	{
		return null;
	}

	[Token(Token = "0x60030AE")]
	[Address(RVA = "0x41729E0", Offset = "0x41729E0", VA = "0x41729E0")]
	private object AddValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x60030AF")]
	[Address(RVA = "0x4172C30", Offset = "0x4172C30", VA = "0x4172C30")]
	private object SubtractValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x60030B0")]
	[Address(RVA = "0x4172DB0", Offset = "0x4172DB0", VA = "0x4172DB0")]
	private object MultiplyValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x60030B1")]
	[Address(RVA = "0x4172F30", Offset = "0x4172F30", VA = "0x4172F30")]
	private object DivideValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x60030B2")]
	[Address(RVA = "0x4174090", Offset = "0x4174090", VA = "0x4174090")]
	private object ModuloValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x60030B3")]
	[Address(RVA = "0x4174220", Offset = "0x4174220", VA = "0x4174220")]
	public bool CheckEquals(object left, object right)
	{
		return default(bool);
	}

	[Token(Token = "0x60030B4")]
	public static T ConvertTo<T>(object obj)
	{
		return (T)null;
	}

	[Token(Token = "0x60030B5")]
	[Address(RVA = "0x416EE30", Offset = "0x416EE30", VA = "0x416EE30")]
	public void LoadMapObjectComponents(MapObject obj, bool init = false)
	{
	}

	[Token(Token = "0x60030B6")]
	[Address(RVA = "0x4174890", Offset = "0x4174890", VA = "0x4174890")]
	public bool LoadRuntimeMapObjectComponents(MapObject obj, bool init = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60030B7")]
	[Address(RVA = "0x4175150", Offset = "0x4175150", VA = "0x4175150")]
	public CustomLogicComponentInstance AddMapObjectComponent(MapObject obj, string componentName)
	{
		return null;
	}

	[Token(Token = "0x60030B8")]
	[Address(RVA = "0x4175870", Offset = "0x4175870", VA = "0x4175870")]
	public void RemoveComponent(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x60030B9")]
	[Address(RVA = "0x4174CF0", Offset = "0x4174CF0", VA = "0x4174CF0")]
	public CustomLogicComponentInstance CreateComponentInstance(string className, MapObject obj, MapScriptComponent script)
	{
		return null;
	}

	[Token(Token = "0x60030BA")]
	[Address(RVA = "0x4175880", Offset = "0x4175880", VA = "0x4175880")]
	private void FindSubcolliders(Transform t, HashSet<GameObject> set)
	{
	}

	[Token(Token = "0x60030BB")]
	[Address(RVA = "0x416EF40", Offset = "0x416EF40", VA = "0x416EF40")]
	public CustomLogicMapObjectBuiltin SetupMapObject(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x60030BC")]
	[Address(RVA = "0x4175D00", Offset = "0x4175D00", VA = "0x4175D00")]
	public CustomLogicMapObjectBuiltin GetOrCreateMapObjectBuiltin(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x60030BD")]
	[Address(RVA = "0x416F050", Offset = "0x416F050", VA = "0x416F050")]
	public CustomLogicPhotonSync SetupNetworking(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x60030BE")]
	[Address(RVA = "0x41730C0", Offset = "0x41730C0", VA = "0x41730C0")]
	public string GetLineNumberString(int lineNumber)
	{
		return null;
	}

	[Token(Token = "0x60030BF")]
	[Address(RVA = "0x416BFE0", Offset = "0x416BFE0", VA = "0x416BFE0")]
	private void LogCustomLogicError(string errorMessage, bool showInChat)
	{
	}

	[Token(Token = "0x60030C0")]
	[Address(RVA = "0x4175E10", Offset = "0x4175E10", VA = "0x4175E10")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x60030C1")]
	[Address(RVA = "0x4175E20", Offset = "0x4175E20", VA = "0x4175E20")]
	public Dictionary<string, CustomLogicClassInstance> GetStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x60030C2")]
	[Address(RVA = "0x4175E30", Offset = "0x4175E30", VA = "0x4175E30")]
	public Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> GetNamespacedStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x60030C3")]
	[Address(RVA = "0x4175E40", Offset = "0x4175E40", VA = "0x4175E40")]
	public Dictionary<string, BaseSetting> GetModeSettings()
	{
		return null;
	}

	[Token(Token = "0x60030C4")]
	[Address(RVA = "0x4176590", Offset = "0x4176590", VA = "0x4176590")]
	public Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettings()
	{
		return null;
	}

	[Token(Token = "0x60030C5")]
	[Address(RVA = "0x4176F60", Offset = "0x4176F60", VA = "0x4176F60")]
	public Dictionary<string, BaseSetting> GetComponentSettings(string component, List<string> parameters)
	{
		return null;
	}

	[Token(Token = "0x60030C6")]
	[Address(RVA = "0x4177D30", Offset = "0x4177D30", VA = "0x4177D30")]
	public List<string> GetComponentNames()
	{
		return null;
	}

	[Token(Token = "0x60030C7")]
	[Address(RVA = "0x4178140", Offset = "0x4178140", VA = "0x4178140")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x60030C8")]
	[Address(RVA = "0x416DBB0", Offset = "0x416DBB0", VA = "0x416DBB0")]
	public void CreateStaticClass(string className)
	{
	}
}
