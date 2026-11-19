// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/HumanCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x20003BF")]
internal class HumanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003C0")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001332")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001333")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001334")]
		[FieldOffset(Offset = "0x20")]
		public HumanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001335")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4001336")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x4001337")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x17000291")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017EC")]
			[Address(RVA = "0x5861CD0", Offset = "0x5860CD0", VA = "0x5861CD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000292")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017EE")]
			[Address(RVA = "0x5861D20", Offset = "0x5860D20", VA = "0x5861D20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x5860400", Offset = "0x585F400", VA = "0x5860400")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x5861620", Offset = "0x5860620", VA = "0x5861620", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x5861630", Offset = "0x5860630", VA = "0x5861630", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017ED")]
		[Address(RVA = "0x5861CE0", Offset = "0x5860CE0", VA = "0x5861CE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400132E")]
	[FieldOffset(Offset = "0x28")]
	private int _horseViewId;

	[Token(Token = "0x400132F")]
	[FieldOffset(Offset = "0x2C")]
	private float _hookLTiling;

	[Token(Token = "0x4001330")]
	[FieldOffset(Offset = "0x30")]
	private float _hookRTiling;

	[Token(Token = "0x4001331")]
	[FieldOffset(Offset = "0x34")]
	public bool Finished;

	[Token(Token = "0x1700028F")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x58601E0", Offset = "0x585F1E0", VA = "0x58601E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000290")]
	internal override bool AllowLocalFileTextures
	{
		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x5860210", Offset = "0x585F210", VA = "0x5860210", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x5860380", Offset = "0x585F380", VA = "0x5860380", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__8))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x5860420", Offset = "0x585F420", VA = "0x5860420")]
	public BaseCustomSkinPart GetCustomSkinPartPublic(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x5860440", Offset = "0x585F440", VA = "0x5860440", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x58615B0", Offset = "0x58605B0", VA = "0x58615B0")]
	public HumanCustomSkinLoader()
	{
	}
}
