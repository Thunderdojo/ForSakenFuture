// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/StartSessionCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UStartSessionCallbackProxyAdvanced::execStartAdvancedSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStartSessionCallbackProxyAdvanced**)Z_Param__Result=UStartSessionCallbackProxyAdvanced::StartAdvancedSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UStartSessionCallbackProxyAdvanced::StaticRegisterNativesUStartSessionCallbackProxyAdvanced()
	{
		UClass* Class = UStartSessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAdvancedSession", &UStartSessionCallbackProxyAdvanced::execStartAdvancedSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics
	{
		struct StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms
		{
			const UObject* WorldContextObject;
			UStartSessionCallbackProxyAdvanced* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms, ReturnValue), Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
		{ "Comment", "/**\n\x09 * Starts a session with the default online subsystem. The session needs to be previously created by calling the \"CreateAdvancedSession\" node.\n\x09 * @param WorldContextObject\n\x09 */" },
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
		{ "ToolTip", "Starts a session with the default online subsystem. The session needs to be previously created by calling the \"CreateAdvancedSession\" node.\n@param WorldContextObject" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartSessionCallbackProxyAdvanced, nullptr, "StartAdvancedSession", nullptr, nullptr, sizeof(StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms), Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_NoRegister()
	{
		return UStartSessionCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession, "StartAdvancedSession" }, // 2267093129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StartSessionCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session starts successfully\n" },
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when the session starts successfully" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an error starting the session\n" },
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when there is an error starting the session" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartSessionCallbackProxyAdvanced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::ClassParams = {
		&UStartSessionCallbackProxyAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartSessionCallbackProxyAdvanced, 3367595749);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UStartSessionCallbackProxyAdvanced>()
	{
		return UStartSessionCallbackProxyAdvanced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartSessionCallbackProxyAdvanced(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced, &UStartSessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UStartSessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartSessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
