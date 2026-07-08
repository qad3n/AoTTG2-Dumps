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

[Token(Token = "0x2000451")]
internal class CustomLogicEvaluator
{
	[Token(Token = "0x2000453")]
	[CompilerGenerated]
	private sealed class _003CEvaluateBlockCoroutine_003Ed__84 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400130A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400130B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400130C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<CustomLogicBaseAst> statements;

		[Token(Token = "0x400130D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x400130E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CustomLogicClassInstance classInstance;

		[Token(Token = "0x400130F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Dictionary<string, object> localVariables;

		[Token(Token = "0x4001310")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConditionalEvalState _003CconditionalState_003E5__2;

		[Token(Token = "0x4001311")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private List<CustomLogicBaseAst>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001312")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private CustomLogicBaseAst _003Cstatement_003E5__4;

		[Token(Token = "0x4001313")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003Ctime_003E5__5;

		[Token(Token = "0x4001314")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private CustomLogicConditionalBlockAst _003Cconditional_003E5__6;

		[Token(Token = "0x4001315")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private CoroutineWithData _003Ccwd_003E5__7;

		[Token(Token = "0x4001316")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CustomLogicForBlockAst _003CforBlock_003E5__8;

		[Token(Token = "0x4001317")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private List<object>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x170008E5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002EC5")]
			[Address(RVA = "0x3E6DED0", Offset = "0x3E6DED0", VA = "0x3E6DED0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008E6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002EC7")]
			[Address(RVA = "0x3E6DF20", Offset = "0x3E6DF20", VA = "0x3E6DF20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EC0")]
		[Address(RVA = "0x3E68A10", Offset = "0x3E68A10", VA = "0x3E68A10")]
		[DebuggerHidden]
		public _003CEvaluateBlockCoroutine_003Ed__84(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002EC1")]
		[Address(RVA = "0x3E6BE30", Offset = "0x3E6BE30", VA = "0x3E6BE30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002EC2")]
		[Address(RVA = "0x3E6BF70", Offset = "0x3E6BF70", VA = "0x3E6BF70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002EC3")]
		[Address(RVA = "0x3E6DE90", Offset = "0x3E6DE90", VA = "0x3E6DE90")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002EC4")]
		[Address(RVA = "0x3E6DE40", Offset = "0x3E6DE40", VA = "0x3E6DE40")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6002EC6")]
		[Address(RVA = "0x3E6DEE0", Offset = "0x3E6DEE0", VA = "0x3E6DEE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000454")]
	[CompilerGenerated]
	private sealed class _003COnSecond_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001318")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001319")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400131A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x170008E7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002ECB")]
			[Address(RVA = "0x3E6E2E0", Offset = "0x3E6E2E0", VA = "0x3E6E2E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008E8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002ECD")]
			[Address(RVA = "0x3E6E330", Offset = "0x3E6E330", VA = "0x3E6E330", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EC8")]
		[Address(RVA = "0x3E61680", Offset = "0x3E61680", VA = "0x3E61680")]
		[DebuggerHidden]
		public _003COnSecond_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002EC9")]
		[Address(RVA = "0x3E6DF30", Offset = "0x3E6DF30", VA = "0x3E6DF30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002ECA")]
		[Address(RVA = "0x3E6DF40", Offset = "0x3E6DF40", VA = "0x3E6DF40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002ECC")]
		[Address(RVA = "0x3E6E2F0", Offset = "0x3E6E2F0", VA = "0x3E6E2F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40012E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _networkCallback;

	[Token(Token = "0x40012E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<object> emptyList;

	[Token(Token = "0x40012E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public float CurrentTime;

	[Token(Token = "0x40012E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool HasSetMusic;

	[Token(Token = "0x40012E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Dictionary<int, CustomLogicNetworkViewBuiltin> IdToNetworkView;

	[Token(Token = "0x40012E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Dictionary<string, CustomLogicNetworkViewBuiltin> AddonToNetworkView;

	[Token(Token = "0x40012EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Dictionary<int, CustomLogicMapObjectBuiltin> IdToMapObjectBuiltin;

	[Token(Token = "0x40012EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected CustomLogicStartAst _start;

	[Token(Token = "0x40012EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected Dictionary<string, CustomLogicClassInstance> _staticClasses;

	[Token(Token = "0x40012ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, CustomLogicClassInstance> _addonClasses;

	[Token(Token = "0x40012EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> _namespacedStaticClasses;

	[Token(Token = "0x40012EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Dictionary<string, List<CustomLogicClassInstance>> _callbacks;

	[Token(Token = "0x40012F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public Dictionary<int, Dictionary<string, float>> PlayerIdToLastPropertyChanges;

	[Token(Token = "0x40012F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public string ScoreboardHeader;

	[Token(Token = "0x40012F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ScoreboardProperty;

	[Token(Token = "0x40012F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly object[] EmptyArgs;

	[Token(Token = "0x40012F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public bool DefaultShowKillScore;

	[Token(Token = "0x40012F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x81")]
	public bool DefaultShowKillFeed;

	[Token(Token = "0x40012F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x82")]
	public bool DefaultAddKillScore;

	[Token(Token = "0x40012F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x83")]
	public bool ShowScoreboardLoadout;

	[Token(Token = "0x40012F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public bool ShowScoreboardStatus;

	[Token(Token = "0x40012F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string ForcedCharacterType;

	[Token(Token = "0x40012FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public string ForcedLoadout;

	[Token(Token = "0x40012FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Stack<(string className, string methodName, CustomLogicSourceType? ns)> _executionStack;

	[Token(Token = "0x40012FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private int _currentLineNumber;

	[Token(Token = "0x4001300")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public object[] Parameters3;

	[Token(Token = "0x4001301")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string add;

	[Token(Token = "0x4001302")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string sub;

	[Token(Token = "0x4001303")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string mul;

	[Token(Token = "0x4001304")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string div;

	[Token(Token = "0x4001305")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private string mod;

	[Token(Token = "0x4001306")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private string eq;

	[Token(Token = "0x4001307")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string copy;

	[Token(Token = "0x170008E2")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6002E9F")]
		[Address(RVA = "0x3E66840", Offset = "0x3E66840", VA = "0x3E66840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EA0")]
		[Address(RVA = "0x3E66850", Offset = "0x3E66850", VA = "0x3E66850")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170008E3")]
	public bool CaptureErrors
	{
		[Token(Token = "0x6002EA1")]
		[Address(RVA = "0x3E66870", Offset = "0x3E66870", VA = "0x3E66870")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EA2")]
		[Address(RVA = "0x3E66880", Offset = "0x3E66880", VA = "0x3E66880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170008E4")]
	public List<CustomLogicError> CapturedErrors
	{
		[Token(Token = "0x6002EA3")]
		[Address(RVA = "0x3E66890", Offset = "0x3E66890", VA = "0x3E66890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EA4")]
		[Address(RVA = "0x3E668A0", Offset = "0x3E668A0", VA = "0x3E668A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002E76")]
	[Address(RVA = "0x3E5B8B0", Offset = "0x3E5B8B0", VA = "0x3E5B8B0")]
	public void Start(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x6002E77")]
	[Address(RVA = "0x3E5F560", Offset = "0x3E5F560", VA = "0x3E5F560")]
	protected void AddCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6002E78")]
	[Address(RVA = "0x3E5FC60", Offset = "0x3E5FC60", VA = "0x3E5FC60")]
	protected void RemoveCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6002E79")]
	[Address(RVA = "0x3E5FF50", Offset = "0x3E5FF50", VA = "0x3E5FF50")]
	public void OnTick()
	{
	}

	[Token(Token = "0x6002E7A")]
	[Address(RVA = "0x3E5FFB0", Offset = "0x3E5FFB0", VA = "0x3E5FFB0")]
	public void OnFrame()
	{
	}

	[Token(Token = "0x6002E7B")]
	[Address(RVA = "0x3E5FFF0", Offset = "0x3E5FFF0", VA = "0x3E5FFF0")]
	public void OnLateFrame()
	{
	}

	[Token(Token = "0x6002E7C")]
	[Address(RVA = "0x3E60030", Offset = "0x3E60030", VA = "0x3E60030")]
	public void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6002E7D")]
	[Address(RVA = "0x3E60130", Offset = "0x3E60130", VA = "0x3E60130")]
	public void OnPlayerSpawn(Player player, BaseCharacter character)
	{
	}

	[Token(Token = "0x6002E7E")]
	[Address(RVA = "0x3E60520", Offset = "0x3E60520", VA = "0x3E60520")]
	public void OnCharacterSpawn(BaseCharacter character)
	{
	}

	[Token(Token = "0x6002E7F")]
	[Address(RVA = "0x3E60650", Offset = "0x3E60650", VA = "0x3E60650")]
	public void OnCharacterReloaded(BaseCharacter character)
	{
	}

	[Token(Token = "0x6002E80")]
	[Address(RVA = "0x3E60780", Offset = "0x3E60780", VA = "0x3E60780")]
	public void OnCharacterDie(BaseCharacter victim, BaseCharacter killer, string killerName)
	{
	}

	[Token(Token = "0x6002E81")]
	[Address(RVA = "0x3E608F0", Offset = "0x3E608F0", VA = "0x3E608F0")]
	public void OnCharacterDamaged(BaseCharacter victim, BaseCharacter killer, string killerName, int damage)
	{
	}

	[Token(Token = "0x6002E82")]
	[Address(RVA = "0x3E60AD0", Offset = "0x3E60AD0", VA = "0x3E60AD0")]
	public object OnChatInput(string message)
	{
		return null;
	}

	[Token(Token = "0x6002E83")]
	[Address(RVA = "0x3E611C0", Offset = "0x3E611C0", VA = "0x3E611C0")]
	public void OnPlayerJoin(Player player)
	{
	}

	[Token(Token = "0x6002E84")]
	[Address(RVA = "0x3E61340", Offset = "0x3E61340", VA = "0x3E61340")]
	public void OnPlayerLeave(Player player)
	{
	}

	[Token(Token = "0x6002E85")]
	[Address(RVA = "0x3E61420", Offset = "0x3E61420", VA = "0x3E61420")]
	public void OnNetworkMessage(Player sender, string message, double sentServerTimestamp)
	{
	}

	[Token(Token = "0x6002E86")]
	[Address(RVA = "0x3E602B0", Offset = "0x3E602B0", VA = "0x3E602B0")]
	public static CustomLogicCharacterBuiltin GetCharacterBuiltin(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x6002E87")]
	[Address(RVA = "0x3E5FA60", Offset = "0x3E5FA60", VA = "0x3E5FA60")]
	[IteratorStateMachine(typeof(_003COnSecond_003Ed__18))]
	private IEnumerator OnSecond()
	{
		return null;
	}

	[Token(Token = "0x6002E88")]
	[Address(RVA = "0x3E5CD10", Offset = "0x3E5CD10", VA = "0x3E5CD10")]
	private void Init()
	{
	}

	[Token(Token = "0x6002E89")]
	[Address(RVA = "0x3E62060", Offset = "0x3E62060", VA = "0x3E62060")]
	private void CreateAddonNetworkChannels()
	{
	}

	[Token(Token = "0x6002E8A")]
	[Address(RVA = "0x3E5F900", Offset = "0x3E5F900", VA = "0x3E5F900")]
	private void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x6002E8B")]
	[Address(RVA = "0x3E62920", Offset = "0x3E62920", VA = "0x3E62920")]
	public void LoadMapObjectComponents(MapObject obj, bool init = false)
	{
	}

	[Token(Token = "0x6002E8C")]
	[Address(RVA = "0x3E62EC0", Offset = "0x3E62EC0", VA = "0x3E62EC0")]
	public bool LoadRuntimeMapObjectComponents(MapObject obj, bool init = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E8D")]
	[Address(RVA = "0x3E63780", Offset = "0x3E63780", VA = "0x3E63780")]
	public CustomLogicComponentInstance AddMapObjectComponent(MapObject obj, string componentName)
	{
		return null;
	}

	[Token(Token = "0x6002E8E")]
	[Address(RVA = "0x3E63EA0", Offset = "0x3E63EA0", VA = "0x3E63EA0")]
	public void RemoveComponent(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x6002E8F")]
	[Address(RVA = "0x3E63320", Offset = "0x3E63320", VA = "0x3E63320")]
	public CustomLogicComponentInstance CreateComponentInstance(string className, MapObject obj, MapScriptComponent script)
	{
		return null;
	}

	[Token(Token = "0x6002E90")]
	[Address(RVA = "0x3E63EB0", Offset = "0x3E63EB0", VA = "0x3E63EB0")]
	private void FindSubcolliders(Transform t, HashSet<GameObject> set)
	{
	}

	[Token(Token = "0x6002E91")]
	[Address(RVA = "0x3E62A30", Offset = "0x3E62A30", VA = "0x3E62A30")]
	public CustomLogicMapObjectBuiltin SetupMapObject(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6002E92")]
	[Address(RVA = "0x3E64330", Offset = "0x3E64330", VA = "0x3E64330")]
	public CustomLogicMapObjectBuiltin GetOrCreateMapObjectBuiltin(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6002E93")]
	[Address(RVA = "0x3E62B40", Offset = "0x3E62B40", VA = "0x3E62B40")]
	public CustomLogicPhotonSync SetupNetworking(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6002E94")]
	[Address(RVA = "0x3E64440", Offset = "0x3E64440", VA = "0x3E64440")]
	public string GetLineNumberString(int lineNumber)
	{
		return null;
	}

	[Token(Token = "0x6002E95")]
	[Address(RVA = "0x3E5FAD0", Offset = "0x3E5FAD0", VA = "0x3E5FAD0")]
	private void LogCustomLogicError(string errorMessage, bool showInChat)
	{
	}

	[Token(Token = "0x6002E96")]
	[Address(RVA = "0x3E64470", Offset = "0x3E64470", VA = "0x3E64470")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6002E97")]
	[Address(RVA = "0x3E64480", Offset = "0x3E64480", VA = "0x3E64480")]
	public Dictionary<string, CustomLogicClassInstance> GetStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x6002E98")]
	[Address(RVA = "0x3E64490", Offset = "0x3E64490", VA = "0x3E64490")]
	public Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> GetNamespacedStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x6002E99")]
	[Address(RVA = "0x3E644A0", Offset = "0x3E644A0", VA = "0x3E644A0")]
	public Dictionary<string, BaseSetting> GetModeSettings()
	{
		return null;
	}

	[Token(Token = "0x6002E9A")]
	[Address(RVA = "0x3E64C00", Offset = "0x3E64C00", VA = "0x3E64C00")]
	public Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettings()
	{
		return null;
	}

	[Token(Token = "0x6002E9B")]
	[Address(RVA = "0x3E655D0", Offset = "0x3E655D0", VA = "0x3E655D0")]
	public Dictionary<string, BaseSetting> GetComponentSettings(string component, List<string> parameters)
	{
		return null;
	}

	[Token(Token = "0x6002E9C")]
	[Address(RVA = "0x3E663A0", Offset = "0x3E663A0", VA = "0x3E663A0")]
	public List<string> GetComponentNames()
	{
		return null;
	}

	[Token(Token = "0x6002E9D")]
	[Address(RVA = "0x3E667B0", Offset = "0x3E667B0", VA = "0x3E667B0")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x6002E9E")]
	[Address(RVA = "0x3E616A0", Offset = "0x3E616A0", VA = "0x3E616A0")]
	public void CreateStaticClass(string className)
	{
	}

	[Token(Token = "0x6002EA5")]
	[Address(RVA = "0x3E668C0", Offset = "0x3E668C0", VA = "0x3E668C0")]
	public CustomLogicEvaluator(CustomLogicStartAst start, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6002EA6")]
	[Address(RVA = "0x3E66EB0", Offset = "0x3E66EB0", VA = "0x3E66EB0")]
	public void ClearCapturedErrors()
	{
	}

	[Token(Token = "0x6002EA7")]
	[Address(RVA = "0x3E64BF0", Offset = "0x3E64BF0", VA = "0x3E64BF0")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x6002EA8")]
	[Address(RVA = "0x3E61800", Offset = "0x3E61800", VA = "0x3E61800")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? callerNamespace)
	{
		return null;
	}

	[Token(Token = "0x6002EA9")]
	[Address(RVA = "0x3E66F10", Offset = "0x3E66F10", VA = "0x3E66F10")]
	private CustomLogicClassInstance CreateUserClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? classNamespace)
	{
		return null;
	}

	[Token(Token = "0x6002EAA")]
	[Address(RVA = "0x3E61AF0", Offset = "0x3E61AF0", VA = "0x3E61AF0")]
	public void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x6002EAB")]
	[Address(RVA = "0x3E68950", Offset = "0x3E68950", VA = "0x3E68950")]
	[IteratorStateMachine(typeof(_003CEvaluateBlockCoroutine_003Ed__84))]
	private IEnumerator EvaluateBlockCoroutine(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements)
	{
		return null;
	}

	[Token(Token = "0x6002EAC")]
	[Address(RVA = "0x3E68A30", Offset = "0x3E68A30", VA = "0x3E68A30")]
	private bool EvaluateBlock(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EAD")]
	[Address(RVA = "0x3E69800", Offset = "0x3E69800", VA = "0x3E69800")]
	private void EvaluateAssignmentExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicAssignmentExpressionAst assignment)
	{
	}

	[Token(Token = "0x6002EAE")]
	[Address(RVA = "0x3E61120", Offset = "0x3E61120", VA = "0x3E61120")]
	public bool HasMethod(CustomLogicClassInstance classInstance, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EAF")]
	[Address(RVA = "0x3E5E2B0", Offset = "0x3E5E2B0", VA = "0x3E5E2B0")]
	public object EvaluateMethod(CustomLogicClassInstance classInstance, string methodName, [Optional] object[] parameterValues, int callerLineNumber = 0)
	{
		return null;
	}

	[Token(Token = "0x6002EB0")]
	[Address(RVA = "0x3E6A520", Offset = "0x3E6A520", VA = "0x3E6A520")]
	public object EvaluateMethod(UserMethod userMethod, [Optional] object[] parameterValues)
	{
		return null;
	}

	[Token(Token = "0x6002EB1")]
	[Address(RVA = "0x3E670A0", Offset = "0x3E670A0", VA = "0x3E670A0")]
	private object EvaluateExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicBaseExpressionAst expression)
	{
		return null;
	}

	[Token(Token = "0x6002EB2")]
	[Address(RVA = "0x3E6B1A0", Offset = "0x3E6B1A0", VA = "0x3E6B1A0")]
	private object EvaluateUnaryExpression(CustomLogicSymbol symbol, object next)
	{
		return null;
	}

	[Token(Token = "0x6002EB3")]
	[Address(RVA = "0x3E6B250", Offset = "0x3E6B250", VA = "0x3E6B250")]
	private object EvaluateBinopExpression(CustomLogicSymbol symbol, object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6002EB4")]
	[Address(RVA = "0x3E6BA50", Offset = "0x3E6BA50", VA = "0x3E6BA50")]
	private object ClassMathOperation(object left, object right, string method)
	{
		return null;
	}

	[Token(Token = "0x6002EB5")]
	[Address(RVA = "0x3E69E40", Offset = "0x3E69E40", VA = "0x3E69E40")]
	private object AddValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6002EB6")]
	[Address(RVA = "0x3E6A090", Offset = "0x3E6A090", VA = "0x3E6A090")]
	private object SubtractValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6002EB7")]
	[Address(RVA = "0x3E6A210", Offset = "0x3E6A210", VA = "0x3E6A210")]
	private object MultiplyValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6002EB8")]
	[Address(RVA = "0x3E6A390", Offset = "0x3E6A390", VA = "0x3E6A390")]
	private object DivideValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6002EB9")]
	[Address(RVA = "0x3E6B4C0", Offset = "0x3E6B4C0", VA = "0x3E6B4C0")]
	private object ModuloValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6002EBA")]
	[Address(RVA = "0x3E6B650", Offset = "0x3E6B650", VA = "0x3E6B650")]
	public bool CheckEquals(object left, object right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EBB")]
	public static T ConvertTo<T>(object obj)
	{
		return (T)null;
	}
}
