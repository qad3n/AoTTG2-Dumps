// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameStatContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/GameStatContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x200036E")]
internal class GameStatContainer : BaseSettingsContainer
{
	[Token(Token = "0x4001119")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Level;

	[Token(Token = "0x400111A")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting Exp;

	[Token(Token = "0x400111B")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting PlayTime;

	[Token(Token = "0x400111C")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting HighestSpeed;

	[Token(Token = "0x400111D")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting TitansKilledTotal;

	[Token(Token = "0x400111E")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting TitansKilledBlade;

	[Token(Token = "0x400111F")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting TitansKilledAHSS;

	[Token(Token = "0x4001120")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting TitansKilledThunderspear;

	[Token(Token = "0x4001121")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting TitansKilledAPG;

	[Token(Token = "0x4001122")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting TitansKilledOther;

	[Token(Token = "0x4001123")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting HumansKilledTotal;

	[Token(Token = "0x4001124")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting HumansKilledBlade;

	[Token(Token = "0x4001125")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting HumansKilledAHSS;

	[Token(Token = "0x4001126")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting HumansKilledThunderspear;

	[Token(Token = "0x4001127")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting HumansKilledAPG;

	[Token(Token = "0x4001128")]
	[FieldOffset(Offset = "0xA8")]
	public IntSetting HumansKilledTitan;

	[Token(Token = "0x4001129")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting HumansKilledOther;

	[Token(Token = "0x400112A")]
	[FieldOffset(Offset = "0xB8")]
	public DamageSetting Damage;

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x58207F0", Offset = "0x581F7F0", VA = "0x58207F0")]
	public void Clear(GameStatRecord record)
	{
		// Lifted from source/cpp/GameProgress/GameStatContainer.c (GameProgress.GameStatContainer$$Clear): 11 lines keep C-only constructs
		DamageSetting __this_00;
		IntSetting pSVar1;
		Il2CppMethodPointer vtableDispatch;
		Il2CppClass pIVar2;
		object actualValue;
		ArgumentOutOfRangeException __this_01;
		String paramName;
		MethodInfo lastManagedFrame;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		FloatSetting pSVar3;
		byte[] local_14 = new byte[4];

		switch(record) {
		case 0:
			pSVar3 = (FloatSetting)this.Level;
			break;
		case 1:
			pSVar3 = (FloatSetting)this.Exp;
			break;
		case 2:
			pSVar3 = this.PlayTime;
			break;
		case 3:
			pSVar3 = this.HighestSpeed;
			break;
		case 4:
			__this_00 = this.Damage;
			if (__this_00 != null) {
				__this_00.ClearRecords();
				return;
			}
			goto label_059209c6;
		case 5:
			pSVar1 = this.TitansKilledTotal;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.TitansKilledBlade;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.TitansKilledAHSS;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.TitansKilledThunderspear;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.TitansKilledAPG;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar3 = (FloatSetting)this.TitansKilledOther;
			method = extraout_RDX;
			break;
		case 6:
			pSVar1 = this.HumansKilledTotal;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.HumansKilledBlade;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.HumansKilledAHSS;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.HumansKilledThunderspear;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.HumansKilledAPG;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar1 = this.HumansKilledTitan;
			if (pSVar1 == null) goto label_059209c6;
			pSVar1.SetDefault();
			pSVar3 = (FloatSetting)this.HumansKilledOther;
			method = extraout_RDX_00;
			break;
		default: ;
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(GameStatRecord));
			actualValue = (object)local_14;
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
			__this_01 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar2);
			paramName = il2cpp_codegen_get_runtime_metadata(&"record");
			__this_01 = new ArgumentOutOfRangeException(paramName, actualValue, null);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_GameProgress_GameStatContainer_Clear);
			throw (object)__this_01;
		}
		if (pSVar3 != null) {
			vtableDispatch = (pSVar3.klass.vtable)._4_SetDefault.methodPtr;
			(*vtableDispatch)(pSVar3,(pSVar3.klass.vtable)._4_SetDefault.method,method,vtableDispatch) ;
			return;
		}
	label_059209c6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001549")]
	[Address(RVA = "0x5820B90", Offset = "0x581FB90", VA = "0x5820B90")]
	public void ClearAll()
	{
		// Lifted from source/cpp/GameProgress/GameStatContainer.c (GameProgress.GameStatContainer$$ClearAll): 12 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppType handle;
		bool bVar3;
		Type enumType;
		Array __this_00;
		VirtualInvokeData pVVar4;
		object pIVar5;
		int piVar6;
		ulong uVar7;
		long lVar8;
		object local_50;
		object local_48;
		object* local_38;
		object* local_30;

		handle = TypeRef_GameProgress_GameStatRecord;
		local_48 = null;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this_00 = Enum.GetValues(enumType);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_50 = (object)__this_00.GetEnumerator();
		local_38 = &local_50;
		local_30 = &local_48;
		do {
			pIVar5 = local_50;
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_50.klass;
			uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
			bVar3 = pIVar5.Dispose();
			pIVar5 = local_50;
			if (!bVar3) {
				pIVar5 = (local_50 as IDisposable);
				if (pIVar5 == null) {
					return;
				}
				pIVar1 = pIVar5.klass;
				uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
				local_48 = pIVar5;
				if (uVar7 == 0) goto label_05920e5f;
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar8 = 0;
				break;
			}
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_50.klass;
			uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
			pIVar5 = pIVar5.Dispose();
			if (pIVar5 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar5.klass._1).element_class != (typeof(GameStatRecord)._1).element_class) {
				throw new InvalidCastException();
			}
			piVar6 = il2cpp_vm_Object_Unbox(pIVar5);
			this.Clear(*piVar6);
		} while(true);
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar8);
				goto label_05920e7d;
			}
		}
	label_05920e5f: ;
	label_05920e7d: ;
		pIVar5.Dispose();
		return;
	}

	[Token(Token = "0x600154A")]
	[Address(RVA = "0x581F700", Offset = "0x581E700", VA = "0x581F700")]
	public GameStatContainer()
	{
		// Lifted from source/cpp/GameProgress/GameStatContainer.c (GameProgress.GameStatContainer$$.ctor): clean
		IntSetting pSVar1;
		FloatSetting pSVar2;
		DamageSetting __this_00;

		pSVar1 = new IntSetting(1, -0x80000000, 0x7fffffff);
		this.Level = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.Exp = pSVar1;
		pSVar2 = new FloatSetting(0.0, -3.4028235e+38, 3.4028235e+38);
		this.PlayTime = pSVar2;
		pSVar2 = new FloatSetting(0.0, 0.0, 100000.0);
		this.HighestSpeed = pSVar2;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.TitansKilledTotal = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.TitansKilledBlade = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.TitansKilledAHSS = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.TitansKilledThunderspear = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.TitansKilledAPG = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.TitansKilledOther = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.HumansKilledTotal = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.HumansKilledBlade = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.HumansKilledAHSS = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.HumansKilledThunderspear = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.HumansKilledAPG = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.HumansKilledTitan = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.HumansKilledOther = pSVar1;
		__this_00 = new DamageSetting();
		__this_00.SetDefault();
		this.Damage = __this_00;
		base();
		return;
	}
}
